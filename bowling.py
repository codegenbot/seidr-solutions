```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10
            if frame_num < 10:
                score += int(frames[2*i+1]) if frames[2*i+1] != '/' else 10
            frame_num += 1
        elif frames[i] == '/':
            first_roll = 10 - int(frames[i+1])
            score += first_roll
            if frame_num < 10:
                if int(frames[2*i+1]) + first_roll < 10:
                    score += int(frames[2*i+1])
                else:
                    score += 10
            frame_num += 1
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1])
            if first_roll + second_roll == 10:
                score += 10
            elif first_roll + second_roll < 10:
                score += first_roll + second_roll
            else:
                score += 10
            frame_num += 1
    return score

frames = input("Enter the frames (e.g., 'X', '/'): ")
print(bowling_score(frames))