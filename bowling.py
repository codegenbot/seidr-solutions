```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i+1].isdigit():
            frame_points = int(frames[i]) + int(frames[i+1])
            if frame_points == 10:
                score += 10
            elif frame_points < 10:
                score += frame_points
            else:
                remaining_frames = len(frames) - i
                next_two_frames = frames[i:i+2]
                while remaining_frames > 0 and (next_two_frames[0] == 'X' or int(next_two_frames[0]) + int(next_two_frames[1]) >= 10):
                    if next_two_frames[0] == 'X':
                        score += 10
                    else:
                        score += int(next_two_frames[0]) + int(next_two_frames[1])
                    remaining_frames -= 2
                    i += 2
                    next_two_frames = frames[i:i+2]
                while remaining_frames > 0 and (int(frames[i]) + int(frames[i+1])) < 10:
                    score += int(frames[i]) + int(frames[i+1])
                    remaining_frames -= 2
                    i += 2
        elif frames[i] == 'X':
            if len(frames) - i > 1:
                next_frame = frames[i+1:i+3]
                if next_frame[0].isdigit() and next_frame[1].isdigit():
                    score += 10 + int(next_frame[0]) + int(next_frame[1])
                else:
                    score += 10
            else:
                score += 10
        elif frames[i] == '/':
            remaining_frames = len(frames) - i
            if remaining_frames > 1:
                next_two_frames = frames[i+1:i+3]
                if next_two_frames[0].isdigit() and next_two_frames[1].isdigit():
                    score += 10 + int(next_two_frames[0]) + int(next_two_frames[1])
                else:
                    score += 10
            else:
                score += 10
    return score