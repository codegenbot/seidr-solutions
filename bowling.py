```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 10
            if i < len(game) - 1:
                next_char = game[i+1]
                if next_char.isdigit():
                    score += int(next_char)
                else:
                    score += 10
            frame += 1
        elif game[i] == '/':
            score += 10
            if i < len(game) - 1:
                next_char = game[i+1]
                if next_char.isdigit():
                    score += int(next_char)
                else:
                    score += 10
            frame += 1
        else:
            roll1 = int(game[i])
            roll2 = int(game[i+1])
            if roll1 + roll2 == 10:
                score += roll1 + roll2
            elif game[i+1] == 'X' or game[i+1] == '/':
                score += roll1 + 10
            else:
                score += roll1 + roll2
        if frame >= 10:
            break
    return score