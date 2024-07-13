```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame_num < 10:
                score += 10 + int(frames[2*i+1]) if frame_num < 9 else int(frames[2*i+1])
            else:
                score += 10
            frame_num += 1
        elif frames[i] == '/':
            score += 10 - int(frames[i+1])
            score += int(frames[i+1]) if frame_num < 10 else 0
            frame_num += 1
        else:
            try:
                if int(frames[i]) + int(frames[i+1]) == 10:
                    if frame_num < 9:
                        score += 10
                    else:
                        score += 10
                elif int(frames[i]) + int(frames[i+1]) < 10:
                    score += int(frames[i]) + int(frames[i+1])
                else:
                    score += 10
            except ValueError: 
                pass
        frame_num += 1
    return score

frames = input("Enter the frames (e.g., 'X', '/'): ")
print(bowling_score(frames))