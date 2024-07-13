```
def bowling_score(game):
    score = 0
    game = game.rstrip()
    frames = []
    for i in range(0, len(game), 2):
        if game[i] == "X":
            frames.append(10)
            if i < len(game) - 1:
                score += int(game[i + 2]) if game[i + 2].isdigit() else 0
                score += int(game[i + 3]) if i + 3 < len(game) and game[i + 3].isdigit() else 0
        elif game[i] == "-":
            first_roll = int(game[i + 1]) if game[i + 1].isdigit() else 0
            second_roll = int(game[i + 2]) if i + 2 < len(game) and game[i + 2].isdigit() else 0
            frames.append(first_roll + second_roll)
        else:
            first_roll = int(game[i]) if game[i].isdigit() else 0
            second_roll = int(game[i + 1]) if i + 1 < len(game) and game[i + 1].isdigit() else 0
            frames.extend([first_roll, second_roll])

    for i in range(len(frames)):
        score += frames[i]
        if i < 9:
            continue
        elif i == 9 and frames[i] == 10:
            score += 20
        elif sum(frames[-2:]) == 10:
            score += 10

    return score

print(bowling_score("X1-1681357-0/XX7/4"))