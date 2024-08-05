def bowling_score(s):
    frames = []
    i = 0
    for _ in range(10):
        if s[i] == "X":
            frames.append(10)
            i += 1
        else:
            if s[i + 1] == "/":
                frames.append(10)
            else:
                frames.append(int(s[i]))
                i += 1
            if s[i] == "X":
                frames[-1] += 10
            else:
                frames[-1] += int(s[i])
        i += 1
    return sum(frames)


s = input()
print(bowling_score(s))