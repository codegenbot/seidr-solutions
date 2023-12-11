import re

def bowling(input_str):
    score = 0
    frames = re.findall(r'[1-9X/-]{1,2}', input_str)
    frame_scores = []

    for frame in frames:
        frame_score = 0
        if frame == "X":
            frame_score = 10
        elif "/" in frame:
            first_bowl, second_bowl = frame[0], frame[1]
            frame_score = 10 if second_bowl == "/" else int(first_bowl) + int(second_bowl)
        else:
            frame_score = sum(int(bowl) for bowl in frame)

        frame_scores.append(frame_score)

    for i in range(9):
        if frames[i] == "X":
            if frames[i+1] == "X":
                score += 10 + frame_scores[i+2]
            else:
                score += 10 + frame_scores[i+1][0]

        if "/" in frames[i]:
            score += 10 + frame_scores[i+1][0]

        score += frame_scores[i]

    if frames[9] == "X":
        score += frame_scores[9] + sum(int(bowl) for bowl in frames[10:12])

    if "/" in frames[9]:
        score += frame_scores[9] + int(frames[9][2])

    score += frame_scores[9]

    return score