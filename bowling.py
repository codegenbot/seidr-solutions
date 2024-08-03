Here is the solution in Python:

def bowling_score(score_str):
    score = 0
    frames = score_str.split('/')
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10
        elif int(frame) == 10:
            score += 10 + (10 - 1)
        else:
            first_roll = int(frame[0])
            second_roll = 10 - first_roll
            if i < 9 and frames[i+1].startswith(str(first_roll)):
                score += first_roll * 2 + second_roll
            else:
                score += first_roll + second_roll
    return score