def bowling(input_str):
    score = 0
    frames = input_str.split("/")
    for i in range(len(frames)):
        frame = frames[i]
        if frame == "X":
            score += 10
            if i < 9:
                next_frame = frames[i + 1]
                if next_frame == "X":
                    score += 10
                else:
                    score += int(next_frame[0])
                    if next_frame[1] == "-":
                        score += 0
                    else:
                        score += int(next_frame[1])
        else:
            for j in range(len(frame)):
                if frame[j] == "-":
                    score += 0
                elif frame[j] == "X":
                    score += 10
                else:
                    score += int(frame[j])
    return score


input_str = input()
print(bowling(input_str))