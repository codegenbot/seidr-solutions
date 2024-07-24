def handle_bonus(bowls, score):
    i = 0
    for frame in range(10):
        if bowls[i] == "/":
            score += 10 - int(bowls[i-1])
        elif bowls[i] == "X":
            score += 10
            if i < len(bowls) - 2 and bowls[i+1] == "X":
                score += 10 + (10 if bowls[i+2] == "/" else int(bowls[i+2]))
            else:
                score += 10 + (10 if bowls[i+1] == "/" else int(bowls[i+1]) + int(bowls[i+2]))
        else:
            score += int(bowls[i]) + (10 if bowls[i+1] == "/" else int(bowls[i+1] if bowls[i+1].isdigit() else 10 - int(bowls[i])))
        i += 1
    return score

input_bowls = input("Enter the bowling sequence: ")
result = handle_bonus(input_bowls, 0)
print(result)