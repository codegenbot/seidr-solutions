def handle_bonus(bowls, score):
    i = 0
    frame = 1

    while frame <= 10:
        if bowls[i] == "/":
            score += 10 - int(bowls[i - 1])
        elif bowls[i] == "X":
            score += 10
            if bowls[i+1] == "X":
                score += 10
                score += int(bowls[i+2]) if bowls[i+2].isdigit() else 10
            elif bowls[i+1] == "/":
                score += 10
            else:
                score += int(bowls[i+1]) if bowls[i+1].isdigit() else 0
                if i < 8 and (bowls[i+1] + bowls[i+2]).isdigit():
                    score += int(bowls[i+1]) + int(bowls[i+2])

        elif bowls[i].isdigit():
            score += int(bowls[i])

        if bowls[i] == "X" or bowls[i] == "/":
            i += 1

        i += 1
        frame += 1

    return score

input_bowls = input("Enter the bowling sequence: ")
result = handle_bonus(input_bowls, 0)
print(result)