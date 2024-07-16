def bowling_score(score):
    score = score.replace("/", "")
    frames = [int(x) for x in re.split("(\d+)", score)]
    total = 0
    roll = 0
    for i in range(10):
        if len(frames) > i:
            if frames[i] == 10:
                total += 10 + bowling_score(frames[i + 1 : i + 11])
                roll += 2
                if len(frames) <= i + 1:
                    break
            elif sum(frames[i : i + 2]) >= 10:
                total += 10
                roll += 2
                frames = frames[i + 2 :]
            else:
                total += sum(frames[i : i + 2])
                roll += 2
                if len(frames) <= i + 1:
                    break
    return total


print(bowling_score(input()))