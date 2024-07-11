```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i] == "X":
            score += 10
            frame += 1
            i += 1
        elif game[i] == "/":
            score += 10 - int(game[i + 1])
            frame += 1
            i += 2
        else:
            num1 = int(game[i])
            if i + 1 < len(game) and (game[i + 1].isdigit() or game[i + 1] == "X"):
                num2 = int(game[i + 1])
                if num1 + num2 <= 10:
                    score += num1 + num2
                    frame += 1
                    i += 2
                else:
                    score += 10
                    frame += 1
                    score += num2 - 5
                    i += 2
            else:
                score += num1
                if i < len(game) - 1 and game[i + 1] == "X":
                    score += 10
                    frame += 1
                    i += 1
                else:
                    i += 1
    return score