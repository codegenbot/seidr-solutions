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
                    total_score += int(next_frame[0])
                    if len(next_frame) > 1 and next_frame[1] == "X":
                        total_score += 10
                    elif len(next_frame) > 1:
                        total_score += int(next_frame[1])
        else:
            for p in frame:
                if p.isdigit():
                    total_score += int(p)
        frame_index += 1
    return total_score


score = input()
print(bowling(score))