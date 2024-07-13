def bowling_score(frames):
    score = 0
    frame_num = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame_num < 10:
                score += 10 + int(frames[2*i+2])
            else:
                score += 10
            frame_num += 1
        elif frames[i] == '/':
            score += 10 - int(frames[i+1])
            if frame_num < 10:
                score += int(frames[2*i+1])
            frame_num += 1
        else:
            if frames[i] != '/':
                try:
                    if int(frames[i]) + int(frames[i+1]) < 10:
                        score += int(frames[i]) + int(frames[i+1])
                    elif frame_num == 9 and int(frames[i]) + int(frames[i+1]) == 10:
                        score += 15
                    else:
                        score += 10
                except ValueError: 
                    pass
            frame_num += 1
    return score

frames = input("Enter the frames (e.g., 'X', '/'): ")
print(bowling_score(frames))