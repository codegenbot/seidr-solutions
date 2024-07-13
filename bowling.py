def bowling_score(frames):
    score = 0
    frame_scores = {"X": 10 + int(frames[i+1]) + int(frames[i+2]), "/": 10 + int(frames[i+1])}
    
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 10
        elif frames[i] == "/":
            score += frame_scores[frames[i]]
        else:
            frame_score = sum(map(int, frames[i].split("-")))
            if i < 9 and frames[i+2].isdigit():
                score += frame_score + int(frames[i+1]) + int(frames[i+2])
            else:
                score += frame_score
    return score