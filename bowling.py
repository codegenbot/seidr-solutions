def bowling_score(frames):
    score = 0
    frame_num = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10 + int(frames[2*i+1].split('/')[0]) if frame_num < 9 else int(frames[2*i+1].split('/')[0])
            score += int(frames[2*i+1].split('/')[1]) if frame_num < 10 else 0
        elif frames[i] == '/':
            if frames[2*i-1] == 'X':
                score += 10
            else:
                score += 10 - int(frames[2*i-1].split('/')[1])
        else:
            frame_points = int(frames[i]) + int(frames[i+1])
            if frame_points > 10:  
                score += 10
                if frame_num < 9:
                    score += int(frames[2*i+3].split('/')[0]) + int(frames[2*i+3].split('/')[1])
                else:
                    score += int(frames[2*i+3].split('/')[0]) + int(frames[2*i+3].split('/')[1])
            else:  
                score += frame_points
        frame_num += 1
    return score

frames = input("Enter the frames (e.g., 'X', '/'): ")
print(bowling_score(f"{frames}"))