def calculate_bowling_score(bowls):
score = 0
frames = []
frame = []
for bowl in bowls:
    if bowl == 'X':
        frame.append(10)
        frames.append(frame)
        frame = []
    elif bowl == '/':
        frame.append(10 - int(frame[0]))
        frames.append(frame)
        frame = []
    elif bowl == '-':
        frame.append(0)
    else:
        frame.append(int(bowl))
        if len(frame) == 2:
            frames.append(frame)
            frame = []
for i in range(len(frames)):
    frame = frames[i]
    score += sum(frame)
    if i < 9:
        if frame[0] == 10:
            if frames[i+1][0] == 10:
                score += frames[i+1][0] + frames[i+2][0]
            else:
                score += frames[i+1][0] + frames[i+1][1]
        elif sum(frame) == 10:
            score += int(frames[i+1][0])
return score

bowls = input()
print(calculate_bowling_score(bowls))