```
def bowling_score(game):
    score = 0
    frame = 1
    for bowl in game.split(' '):
        if len(bowl) == 2 and bowl[1] == '/':
            strike_frame = int(frame)
            for _ in range(2):
                next_bowl = game.split(' ')[frame]
                if len(next_bowl) > 2 and next_bowl[1] == '/':
                    score += 10 + int(next_bowls.split(' ')[0])
                elif next_bowl[1] == 'X':
                    score += 10 + (10 - int(next_bowl[0])) * 2
                else:
                    score += int(next_bowl[:1]) * 2 + int(next_bowl[1:])
                frame += 1
        elif bowl[0] == 'X':
            if len(bowl) > 1 and bowl[1] != '/':
                score += 10 + int(bowl[1])
            else:
                for _ in range(2):
                    next_bowl = game.split(' ')[frame]
                    if len(next_bowl) > 2 and next_bowl[1] == '/':
                        score += 10 + int(next_bowls.split(' ')[0])
                    elif next_bowl[1] == 'X':
                        score += 10 + (10 - int(next_bowl[0])) * 2
                    else:
                        score += int(next_bowl[:1]) * 2 + int(next_bowl[1:])
                    frame += 1
        elif bowl == 'X X':
            score += 20
        else:
            if len(bowl) > 1 and bowl[0] == '/':
                score += int(bowl[:1]) * 2 + int(bowl[1:])
            else:
                score += int(bowl)
        frame += 1
    return score