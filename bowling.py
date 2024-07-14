```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(len(game)):
        if game[i].isdigit():
            total = int(game[i])
            if i < len(game) - 1 and game[i+1].isdigit():
                total += int(game[i+1])
            if i < len(game) - 2 and game[i+2] == '/':
                total += 10
                score += total
                frame += 1
                continue
            elif i < len(game) - 1 and game[i+1] == 'X':
                total += 10
                if i < len(game) - 2 and game[i+2].isdigit():
                    total += int(game[i+2])
                score += total
                frame += 1
                continue
            elif i < len(game) - 1 and game[i+1] == 'X' * 2:
                score += 10 + 10 + int(game[i+2])
                frame += 1
                continue
            if i < len(game) - 1 and game[i+1].isdigit():
                total += int(game[i+1])
            if i < len(game) - 1 and game[i+1] == 'X':
                score += 10 + 10
                frame += 1
                continue
            score += total
        elif game[i] == 'X':
            score += 10
            frame += 1
        elif game[i] == '/':
            score += 10
            frame += 1
    return score