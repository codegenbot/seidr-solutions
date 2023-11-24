def calculate_score(bowls):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if bowls[i] == 'X':
            score += 10
            if i + 2 < len(bowls):
                if bowls[i + 2] == 'X':
                    score += 10
                elif bowls[i + 2].isdigit():
                    score += int(bowls[i + 2])
            if i + 3 < len(bowls):
                if bowls[i + 3] == '/':
                    score += 10
                elif bowls[i + 3].isdigit():
                    score += int(bowls[i + 3])
            i += 1
        elif bowls[i] == '/':
            score += 10 - int(bowls[i - 1])
            if i + 1 < len(bowls):
                if bowls[i + 1] == 'X':
                    score += 10
                elif bowls[i + 1].isdigit():
                    score += int(bowls[i + 1])
            i += 1
        elif bowls[i].isdigit():
            score += int(bowls[i])
            if i + 1 < len(bowls):
                if bowls[i + 1] == '/':
                    score += 10 - int(bowls[i])
                elif bowls[i + 1].isdigit():
                    score += int(bowls[i + 1])
            i += 1
        frame += 1
    return score

bowls = input().strip()
print(calculate_score(bowls))