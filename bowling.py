```Python
def bowling_score(game):
    score = 0
    frame = 1
    while frame <= 10:
        if game[frame - 1] == "X":
            if frame < 10:
                score += 30
                if game[frame] in 'XY' or game[frame].isdigit():
                    score += int(game[frame])
                    frame += 1
            else:
                score += 30
        elif game[frame - 1].isdigit():
            total = int(game[frame - 1]) + int(game[frame])
            if total == 10:
                if frame < 10:
                    if game[frame] in 'XY' or game[frame].isdigit():
                        score += 10 + int(game[frame])
                        frame += 2
                    else:
                        score += 10
                        frame += 1
                else:
                    score += 10
            else:
                score += total
                frame += 1
        else:
            total = 0
            for i in range(3):
                if i < len(game) and game[frame - 1 + i].isdigit():
                    total += int(game[frame - 1 + i])
            if total == 10:
                if frame < 10:
                    score += 10
                    frame += 1
                else:
                    score += 10
            else:
                score += total
                frame += 1
    return score