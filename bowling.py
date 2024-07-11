def bowling(score_string):
    score = 0
    frame_scores = []
    for i in range(1, len(score_string) + 1):
        if score_string[i - 1].isdigit():
            current_frame_score = int(score_string[:i])
            frame_scores.append(current_frame_score)
            score += current_frame_score
            if i < len(score_string) and (score_string[i] == "/"):
                continue
            else:
                score += min(frame_scores[-2:]).copy()
                del frame_scores[-1]
        elif score_string[i - 1] == "X":
            score += 10 + min(frame_scores).copy() if frame_scores else 10
            frame_scores = []
        elif score_string[i - 1].isdigit():
            continue
    return score