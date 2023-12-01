def bowling_score(bowls):
    frame_scores = []
    frames = [b for b in re.split(r'(?<!/)(?<=X)|(?<=/)', bowls) if b]
    for i in range(len(frames)):
        if frames[i] == 'X':
            frame_scores.append(10)
        elif '/' in frames[i]:
            frame_scores.append(10 - int(frames[i-1]))
        else:
            frame_scores.append(sum(int(b) for b in frames[i]))
    return sum(frame_scores)