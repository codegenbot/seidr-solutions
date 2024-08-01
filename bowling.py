def bowling_score(s):
    s = s.replace("/", "0")
    frames = []
    total = 0
    i = 0
    while len(frames) < 10:
        if s[i] == "X":
            frames.append(10)
            i += 1
        elif s[i : i + 2] == "XX":
            frames.append(20)
            i += 2
        else:
            strike = False
            frame = 0
            for j in range(i, len(s)):
                if s[j] != "X" and s[j : j + 2] != "XX":
                    break
                if s[j] == "X" or (s[j : j + 2] == "XX" and strike):
                    if s[j].isdigit():
                        frame = int(s[j])
                        if j < len(s) - 1:
                            strike = True
                    else:
                        frame += 10
                    break
            frames.append(frame)
            i = j + 1
    for frame in frames:
        total += frame
    return total