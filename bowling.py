def bowling_score(frames):
    score = 0
    frame_num = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10
            if frame_num < 9:
                score += int(frames[2*i+3].split('/')[0]) + int(frames[2*i+3].split('/')[1])
            else:
                score += int(frames[2*i+3].split('/')[0]) + int(frames[2*i+3].split('/')[1])
        elif frames[i] == '/':
            score += 10 - int(frames[i-1].split('/')[1])
        else:
            if frames[i] == 'X' or frames[i] == '/':
                frame_points = 10
            else:
                frame_points = int(frames[i]) + int(frames[i+1])
            score += frame_points
        frame_num += 1
    return score

frames = input("Enter the frames (e.g., 'X', '/'): ")
print(bowling_score(f"{frames}"))