def bowling_score(frames):
    score = 0
    frame_number = 1
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            if frame_number < 10:
                score += 30
            else:
                score += 10
            frame_number += 1
        elif frames[i].isdigit():
            if int(frames[i]) + int(frames[i + 1]) >= 10:
                score += 10 + (int(frames[i]) + int(frames[i + 1])) - 10
                frame_number += 1
            else:
                score += int(frames[i]) + int(frames[i + 1])
        elif frames[i] == "/":
            if frame_number < 10:
                score += 10
            else:
                score += 0
            frame_number += 1
    return score