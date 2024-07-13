def bowling_score(frames):
    score = 0
    prev_frame = None
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if prev_frame == '/':
                score += 10 + int(frames[2*i+1])
            else:
                score += 10
        elif frames[i] == '/':
            score += 10 - int(frames[i+1])
            try:
                score += int(frames[2*i+1])
            except ValueError: 
                pass
        else:
            roll = int(frames[i]) + int(frames[i+1])
            if prev_frame != '/' and roll < 10:
                score += roll
            elif prev_frame == '/':
                score += 10 - int(frames[i+1])
            else:
                score += 10 + max(int(frames[i]), 10)
        prev_frame = frames[i]
    return score

frames = input("Enter the frames (e.g., 'X', '/'): ")
print(bowling_score(frames))