def calculate_score(bowling_round):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if bowling_round[i] == 'X':
            score += 10
            if i + 2 < len(bowling_round):
                if bowling_round[i + 2] == 'X':
                    score += 10
                elif bowling_round[i + 2] == '/':
                    score += 10 - int(bowling_round[i + 1])
                else:
                    score += int(bowling_round[i + 1]) + int(bowling_round[i + 2])
            i += 1
        elif bowling_round[i] == '/':
            score += 10 - int(bowling_round[i - 1])
            if i + 1 < len(bowling_round):
                if bowling_round[i + 1] == 'X':
                    score += 10
                else:
                    score += int(bowling_round[i + 1])
            i += 1
        else:
            score += int(bowling_round[i])
        i += 1
        frame += 1
    return score

bowling_round = input()
print(calculate_score(bowling_round))