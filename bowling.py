def calculate_score(bowls):
    score = 0
    i = 0
    for frame in range(10) if i < len(bowls):
        if bowls[i] == "X":
            score += 10
            if i + 1 < len(bowls):
                if bowls[i + 1] == "X":
                    score += 10
                else:
                    score += int(bowls[i + 1])
                if i + 2 < len(bowls):
                    if bowls[i + 2] == "X":
                        score += 10
                    elif bowls[i + 2] == "/":
                        score += 10 - int(bowls[i + 1])
                    else:
                        score += int(bowls[i + 2])
        elif i + 1 < len(bowls) and bowls[i + 1] == "/":
            score += 10
        elif bowls[i] != "-":
            score += int(bowls[i])
        i += 2
    return score

input_bowls = input("Enter the bowling sequence: ")
result = calculate_score(input_bowls)
print(result)