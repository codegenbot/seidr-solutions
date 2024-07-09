````
frames = input("Enter the string representing individual bowls: ")
def bowling_score(frames):
    score = 0
    frames = frames.split() 
    for i, frame in enumerate(frames):
        if frame == "X": 
            if i+1 < len(frames) and (frames[i+1].strip().startswith("//") or frames[i+1].strip().startswith("9X")):
                score += 10
                if frames[i+1].strip().startswith("9X"):
                    score += int(frames[i+1].strip()[2:])
        elif frame == "/": 
            frame_score = 10
            if i+1 < len(frames):
                frame_score += int(frames[i+1].strip())
            score += frame_score
        else: 
            try:
                score += sum(int(c) for c in frame)
            except ValueError:
                return -1 
    return score

print(bowling_score(frames))