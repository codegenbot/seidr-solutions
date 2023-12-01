def calculate_score(round):
    score = 0
    frame = 1
    i = 0

    while frame <= 10:
        if round[i] == 'X':
            score += 10
            if i + 2 < len(round):
                if round[i + 2] == 'X':
                    score += 10
                else:
                    score += int(round[i + 2])
            if i + 1 < len(round):
                if round[i + 1] == 'X':
                    score += 10
                elif round[i + 1] == '/':
                    score += 10 - int(round[i])
                else:
                    score += int(round[i + 1])
            i += 1
        elif round[i] == '/':
            score += 10 - int(round[i - 1])
            if i + 1 < len(round):
                if round[i + 1] == 'X':
                    score += 10
                else:
                    score += int(round[i + 1])
            i += 1
        else:
            score += int(round[i])
        i += 1
        frame += 1

    return score

round = input()
print(calculate_score(round))