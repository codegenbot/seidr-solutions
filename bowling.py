```
def bowling_score():
    game = input().rstrip()
    frames = []
    for i in range(0, len(game), 2):
        if game[i] == "X":
            frames.append(10)
        elif game[i] == "-":
            first_roll = int(game[i + 1]) if game[i + 1].isdigit() else 0
            second_roll = int(game[i + 2]) if i + 2 < len(game) and game[i + 2].isdigit() else 0
            frames.append(first_roll + second_roll)
        else:
            first_roll = int(game[i]) if game[i].isdigit() else 0
            second_roll = int(game[i + 1]) if i + 1 < len(game) and game[i + 1].isdigit() else 0
            frames.extend([first_roll, second_roll])

    score = 0
    last_frame = False
    for i in range(len(frames)):
        if i < 9:
            score += frames[i]
        elif i == 9 and frames[i] == 10:
            score += 20
        else:
            if sum(frames[-2:]) == 10:
                score += 10
                last_frame = True
            elif last_frame:
                score += frames[-1]
                break
            else:
                score += sum(frames[-2:])

    return score

print(bowling_score())