def bowling(input_str):
    score = 0
    frames = input_str.split("/")
    for frame in frames:
        for i in range(len(frame)):
            if frame[i] == "X":
                score += 10
            elif frame[i] == "-":
                score += 0
            else:
                score += int(frame[i])

    return score


input_str = input()
print(bowling(input_str))