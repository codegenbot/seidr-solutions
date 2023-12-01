def calculate_bowling_score(frames):
    score = 0
    frame_index = 0
    frame = 1

    while frame <= 10:
        if frames[frame_index] == 'X':
            score += 10
            if frames[frame_index + 2] == 'X':
                score += 10
                if frames[frame_index + 4] == 'X':
                    score += 10
                else:
                    score += int(frames[frame_index + 4])
            else:
                if frames[frame_index + 3] == '/':
                    score += 10
                else:
                    score += int(frames[frame_index + 2]) + int(frames[frame_index + 3])
            frame_index += 2
        elif frames[frame_index + 1] == '/':
            score += 10
            if frames[frame_index + 2] == 'X':
                score += 10
            else:
                score += int(frames[frame_index + 2])
            frame_index += 3
        else:
            score += int(frames[frame_index]) + int(frames[frame_index + 1])
            frame_index += 2
        frame += 1

    return score

frames = input()
print(calculate_bowling_score(frames))