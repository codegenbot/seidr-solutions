```
def bowling_score(frames):
    score = 0
    roll = []
    for frame in frames.split('/'):
        if '-' not in frame:
            frame_score = int(frame)
            roll.append(frame_score)
            if len(roll) == 2 and sum(roll) == 10:
                roll = []
            elif len(roll) >= 2 and sum(roll) > 10:
                score += 10
                roll = [sum(roll)-10]
        else:
            frame_score = int(frame.split('-')[0])
            if frame_score == 10:
                score += 10 + (10 - len(roll)) * 10
                roll = []
            elif frame_score < 10 and len(roll) >= 1:
                score += 10 + max(int(frame.split('-')[1]), int(frame.split('-')[0]))
                roll = [max(int(frame.split('-')[1]), int(frame.split('-')[0]))]
    for i in roll:
        score += i
    return score