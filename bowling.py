def bowling(score):
    frames = score.split("/")
    total_score = 0
    frame_index = 0
    for frame in frames:
        if frame == "X":
            total_score += 10
            if frame_index < 9:
                next_frame = frames[frame_index + 1]
                if next_frame == "X":
                    total_score += 10
                else:
                    for char in next_frame:
                        if char == "X":
                            total_score += 10
                        else:
                            total_score += int(char)
        else:
            if frame[1] == "":
                total_score += 10
            else:
                total_score += sum(int(p) for p in frame)
        frame_index += 1
    return total_score

score = input()
print(bowling(score))