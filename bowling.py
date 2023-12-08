def calculate_score(bowls):
    score = 0
    frame = 0
    i = 0

    while frame < 10:
        try:
            if bowls[i] == 'X':
                score += 10
                if i + 2 < len(bowls):
                    if bowls[i + 2] == 'X':
                        score += 10
                    elif bowls[i + 2] == '/':
                        score += 10 - int(bowls[i + 1])
                    else:
                        score += int(bowls[i + 1]) + int(bowls[i + 2])
                frame += 1
            elif bowls[i] == '/':
                score += 10 - int(bowls[i - 1])
                if i + 1 < len(bowls):
                    if bowls[i + 1] == 'X':
                        score += 10
                    else:
                        score += int(bowls[i + 1])
                frame += 1
            else:
                score += int(bowls[i])
                frame += 1
        except ValueError:
            pass

        i += 1

    return score


bowls = input()
print(calculate_score(bowls))