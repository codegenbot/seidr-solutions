```
def bowling_score(game):
    score = 0
    game = game.rstrip()
    rolls = []
    total = 0
    for i in range(0, len(game), 2):
        if game[i] == "X":
            rolls.append(10)
            total += 10
            if i < len(game) - 1 and game[i + 1].isdigit():
                score += int(game[i + 1])
        elif game[i] == "-":
            frame_score = sum(int(x) for x in reversed([c for c in game[i:i+3][::-1] if c.isdigit()]))
            rolls.append(frame_score)
            total += frame_score
        else:
            if game[i].isdigit():
                first_roll = int(game[i])
            else:
                first_roll = 0
            if i < len(game) - 1 and game[i + 1].isdigit():
                second_roll = int(game[i + 1])
            else:
                second_roll = 0
            rolls.extend([first_roll, second_roll])

    for x in range(len(rolls)):
        if total + (10 - rolls[x]) <= 10:
            score += 10
        else:
            score += total + (10 - rolls[x])
        total = 0

    return score

print(bowling_score("X1-1681357-0/XX7/4"))