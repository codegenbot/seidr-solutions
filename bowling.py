def bowling_score(frames):
    frame_scores = [0, 1, 2]
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            frame_scores.append(10)
            if i+1 < len(frames) and frames[i+1] == 'X':
                frame_scores.append(10)
            elif i+3 < len(frames) and frames[i+1].isdigit() and int(frames[i+1]) <= 9:
                frame_scores.extend(list(map(int, frames[i+1:i+2])))
        elif frames[i] == '/':
            frame_scores.extend([5, int(frames[i+1])])
            i += 1
        else:
            rolls = list(map(int, frames[i:i+2].replace("/","").split()))
            if sum(rolls) == 10 and len(rolls) > 1:
                frame_scores.append(10)
            else:
                frame_scores.extend(rolls)
    return sum(frame_scores)