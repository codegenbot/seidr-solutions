def bowling(input_str):
    score = 0
    frames = input_str.split("/")
    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            if i < 9:
                if input_str[i + 1] == "X":
                    score += 10
                else:
                    score += int(input_str[i + 1])
                    if input_str[i + 2] == "/":
                        score += 10 - int(input_str[i + 1])
                    elif input_str[i + 2] != "-":
                        score += int(input_str[i + 2])
        else:
            for bowl in frames[i]:
                if bowl == "X":
                    score += 10
                elif bowl == "-":
                    score += 0
                else:
                    score += int(bowl)
    return score


input_str = input()
print(bowling(input_str))