def handle_bonus(bowls, score):
    for i in range(10):
        if bowls[i] == "/":
            score += 10 - int(bowls[i - 1])
        elif bowls[i] == "X" and i < 9:
            score += 10
            if bowls[i+1] == "X":
                score += 10
                if i < 8 and bowls[i+2] == "/":
                    score += 10
                else:
                    score += int(bowls[i+2]) if bowls[i+2].isdigit() else 0
            elif i < 9 and bowls[i+1] == "/":
                score += 10
            else:
                score += int(bowls[i+1]) if bowls[i+1].isdigit() else 0
        elif bowls[i].isdigit() or bowls[i] == "-":
            score += int(bowls[i])

    return score

input_bowls = input("Enter the bowling sequence: ")
result = handle_bonus(input_bowls, 0)
print(result)