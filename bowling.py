def bowling_score(frames):
    scores = [0]
    current_frame_score = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            if int(frame) == 10:
                current_frame_score += 10 + max(
                    int(frames[frames.index(frame) - 1]) for r in range(i - 1, i + 2)
                )
            else:
                current_frame_score += int(frame)
            scores[-1] = current_frame_score
        elif len(frame) > 1:
            if sum(map(int, frame)) == 10:
                strikes = 0
                for f in frames.split("/"):
                    if len(f) == 1 and int(f) == 10:
                        strikes += 1
                    else:
                        break
                current_frame_score += 10 + (strikes * 10)
            else:
                current_frame_score += sum(map(int, frame))
        scores.append(current_frame_score)
    return max(scores)