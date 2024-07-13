```Python
def bowling_score(frames):
    score = 0
    frame_count = 1
    for i in range(0, len(frames), 2):
        frame = frames[i:i+2]
        if frame == "X X":
            score += 30
        elif "/" in frame:
            if frame.count("/") == 1:
                score += 10 + int(frame.replace("/", str(int(frame.replace("/", ""))))[1])
            else:
                score += 10 + sum(map(int, list(frame.replace("/", ""))))
        else:
            strike = False
            spare = False
            for j in range(2):
                if frame[j] != "X" and frame[j] != "/":
                    if int(frame[j]) == 10:
                        if i < len(frames) - 1 and frames[i+2][0] == "X" or frames[i+2][0] == "/":
                            score += 10 + (i+3) * 10
                        else:
                            score += 10 + sum(map(int, list(frame[j:])))
                        strike = True
                        break
                    elif j < 1 and int(frame[1]) == 10:
                        if i < len(frames) - 2 and frames[i+3][0] == "X" or frames[i+3][0] == "/":
                            score += 20 + (i+4) * 10
                        else:
                            score += 20 + sum(map(int, list(frame[1:])))
                        spare = True
                        break
            if not strike and not spare:
                score += sum(map(int, frame))
        frame_count -= 1
    return score