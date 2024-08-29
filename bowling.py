```
def bowling_score(game):
    score = 0
    frame = 1
    for bowl in game:
        if bowl == 'X':
            score += 10 + (10 if frame < 9 else 0)
            frame += 1
        elif bowl == '/':
            score += 10
            frame += 1
        elif bowl.isdigit():
            strike = False
            for next_bowl in game[game.index(bowl)+1:]:
                if next_bowl.isdigit() and len(next_bowls) < 2:
                    break
                if next_bowl == 'X':
                    score += int(bowl) + 10
                    frame += 1
                    strike = True
                    break
            if not strike:
                score += int(bowl) + int(game[game.index(bowl)+1])
        else:
            score += int(bowl)
    return score