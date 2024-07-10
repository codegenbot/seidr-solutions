Here is the solution:

def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit() and game[i+1].isdigit():
            count = int(game[i])
            if count == 10:
                score += 10 + 10
                frame += 1
            else:
                score += count + int(game[i+1])
                frame += 1
        elif game[i] == 'X':
            score += 10 + 10
            frame += 1
        elif game[i] == '/':
            first = int(game[:i].count('X'))
            second = 10 - first
            if first > 0:
                score += 10 + second
            else:
                score += second
            frame += 1
    return score