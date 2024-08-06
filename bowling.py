```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index:frame_index+2] == "X" * 2:
            score += 30
            frame_index += 2
        elif str(int(frames[frame_index])) != "0":
            score += min(int(frames[frame_index]), 10)
            frame_index += 1
        else:
            if frames[frame_index:frame_index+2].count("X") == 1:
                score += 20 + int(frames[frame_index+1])
                frame_index += 3
            elif frames[frame_index:frame_index+3].count("X") == 2:
                score += 30 - min(int(frames[frame_index:frame_index+2]), 10)
                frame_index += 3
            else:
                if i != 10:
                    score += int(frames[frame_index])
                    frame_index += 1
                else:
                    score += sum(map(int, frames[frame_index:]))
    return score