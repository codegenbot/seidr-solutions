def bowling_score(game):
    score = 0
    frame = 1
    for i in range(len(game)):
        if game[i].isdigit():
            num1 = int(game[i])
            if i + 1 < len(game) and game[i + 1].isdigit():
                num2 = int(game[i + 1])
                score += num1 + num2
                frame -= 1
            elif game[i] == "X":
                score += 10
                frame -= 1
            elif game[i] == "/":
                if num1 == 10:
                    score += 10
                    frame -= 1
                else:
                    score += num1 + int(game[i + 2])
                    i = i - 1
                    frame -= 1
    return score