def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split("/")):
        if len(frame) == 1:
            score += 10
        elif "X" in frame:
            if i < 9:
                score += 10 + int(frames.split("/")[i + 1].split("X")[0])
            else:
                score += 10
        else:
            strike = False
            spare = False
            for char in frame:
                if char == "X":
                    strike = True
                elif char != "X" and char != "/":
                    if not strike:
                        spare = True
                    break
            if strike:
                score += 10 + int(frames.split("/")[i + 1].split("X")[0])
            elif spare:
                score += 10
    return score