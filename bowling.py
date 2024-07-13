```
def bowling_score(game):
    score = 0
    game = game.rstrip()
    rolls = []
    for i in range(0, len(game), 2):
        if game[i] == "X":
            score += 10
            if i < len(game) - 1 and game[i + 1].isdigit():
                score += int(game[i + 1])
        elif game[i] == "-":
            frame_score = sum(int(x) for x in reversed([c for c in game[i:i+3][::-1] if c.isdigit()]))
            score += frame_score
            if frame_score < 10:  
                while i + 2 < len(game) and not rolls[-1]:
                    i += 1
                    if game[i].isdigit():
                        score += int(game[i])
                    else:
                        break
        else:
            first_roll = int(game[i]) if game[i].isdigit() else 0
            if i < len(game) - 1 and game[i + 1].isdigit():
                second_roll = int(game[i + 1])
            else:
                second_roll = 0
            rolls.extend([first_roll, second_roll])
            score += sum(rolls[-2:])

    return score

print(bowling_score("X1-1681357-0/XX7/4"))