def calculate_bowling_score(round):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if round[i] == 'X':
            score += 10
            if round[i+2] == 'X':
                score += 10
                if round[i+4] == 'X':
                    score += 10
                else:
                    score += int(round[i+4])
            else:
                if round[i+3] == '/':
                    score += 10
                else:
                    score += int(round[i+2]) + int(round[i+3])
            i += 1
        elif round[i+1] == '/':
            score += 10
            if round[i+2] == 'X':
                score += 10
            else:
                score += int(round[i+2])
        else:
            score += int(round[i]) + int(round[i+1])
        i += 2
        frame += 1
    return score

round = input()
print(calculate_bowling_score(round))