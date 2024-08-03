def bowling_game(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i] == "/":
            score += 10 + int(frames[i + 1])
        else:
            frame_score = int(frames[i]) + int(frames[i + 1])
            if i < 8 and frame_score == 10:
                next_frame = int(frames[i + 2])
                score += 10
                if next_frame == 0 or next_frame > 2:
                    score += 10
                else:
                    score += next_frame
            elif i < 9 and (i + 3) <= len(frames):
                next_two_frames = int(frames[i + 2]) + int(frames[i + 3])
                score += frame_score + max(next_two_frames - 2, 0)
            else:
                score += frame_score
    return score