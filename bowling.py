```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == "X":
            score += 10 + int(game[i+1]) if i+1 < len(game) and game[i+1].isdigit() else 10
        elif game[i] == "2" and game[i+1] in ["8", "9"]:
            score += 12
            frame += 1
        elif game[i].isdigit():
            if int(game[i]) + int(game[i+1]) == 10:
                score += 10
                frame += 1
            else:
                score += int(game[i]) + int(game[i+1])
                frame += 1
        else:
            if game[i:i+2].isdigit():
                score += int(game[i:i+2])
                frame += 1
    return score