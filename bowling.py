def calculate_score(bowls):
    score = 0
    frame = 1
    index = 0
    while frame <= 10:
        if bowls[index] == 'X':
            score += 10
            if index < len(bowls) - 2:
                if bowls[index + 2] == 'X':
                    score += 10
                elif bowls[index + 2] == '/':
                    score += 10 - int(bowls[index + 1])
                else:
                    score += int(bowls[index + 1]) + int(bowls[index + 2])
            index += 1
        elif bowls[index] == '/':
            score += 10 - int(bowls[index - 1])
            if index < len(bowls) - 1:
                if bowls[index + 1] == 'X':
                    score += 10
                else:
                    score += int(bowls[index + 1])
            index += 1
        else:
            score += int(bowls[index])
        index += 1
        frame += 1
    return score

bowls = input()
print(calculate_score(bowls))