def bowling_score(s):
    frames = [0] * 10
    for i in range(len(s)):
        if s[i].isdigit():
            frame = ""
            while i < len(s) and s[i].isdigit():
                frame += s[i]
                i += 1
            if "/" in frame:
                strikes, spares = 0, 0
                if frame[0] == "X":
                    strikes = 10
                elif frame[0] != "5":
                    spares = 5 - int(frame[0])
                frames[min(int(frame.split("/")[1]), 9)] += 10 + spares
            else:
                if len(frame) > 1 and frame[0] == "X" and frame[1] == "X":
                    strikes += 2
                    for f in range(min(8, int(frame[2])), -1, -1):
                        frames[f] += 10
                elif frame[0] == "X":
                    strikes = 10
                    for f in range(min(9, int(frame[1])), -1, -1):
                        frames[f] += 10
                else:
                    if len(frame) > 2 and frame[0:2].isdigit() and int(frame[0:2]) < 10:
                        strikes = 5 + int(frame[0:2])
                    elif len(frame) > 1 and frame[0] == "X":
                        strikes += 5
                        frames[min(int(frame[1]), 9)] += 5
                    else:
                        if len(frame) > 1 and frame[0] == "S":
                            spares = 5 - int(frame[1])
                            for f in range(min(9, int(frame[2])), -1, -1):
                                frames[f] += 10
                        else:
                            strikes += 1
            if strikes > 0:
                frames[9] += strikes
    return sum(frames)