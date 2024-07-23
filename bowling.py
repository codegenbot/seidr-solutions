```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            if game[i+1].isdigit():
                roll = int(game[i]) + int(game[i+1])
                if roll == 10:
                    score += roll
                    frame += 1
                else:
                    score += roll
                    if frame < 10:
                        if i + 3 <= len(game) and game[i+2].isdigit():
                            score += int(game[i+1]) + int(game[i+2])
                            frame += 1
            else:
                score += int(game[i])
                if frame < 10:
                    if i + 1 <= len(game):
                        if game[i+1] == 'X':
                            score += 10
                            frame += 1
                        elif game[i+1].isdigit():
                            roll = 10 - int(game[i])
                            if roll >= 0 and (i + 3 > len(game) or not game[i+2].isdigit()):
                                score += 10
                                frame += 1
                            else:
                                score += 10 + roll
                                frame += 1
                    else:
                        score += 10
                        frame += 1
        elif game[i] == 'X':
            score += 10
            frame += 1
        elif game[i] == '/':
            first_roll = 10 - int(game[i-1])
            if first_roll >= 0 and (i + 2 > len(game) or not game[i+1].isdigit()):
                score += 10
                frame += 1
            else:
                score += 10 + first_roll
                frame += 1
    return score