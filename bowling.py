def calculate_bowling_score(bowls):
    score = 0
    frame = []
    for bowl in bowls:
        if bowl == 'X':
            frame.append(10)
            score += 10
        elif bowl == '/':
            score += 10 - int(frame[-1])
        elif bowl == '-' and not(frame or bowls):
            break
        elif bowl == '-':
            frame.append(0)
        else:
            frame.append(int(bowl))
            if len(frame) == 2:
                score += sum(frame)
                frame = []
    return score + sum(frame)

bowls = input()
print(calculate_bowling_score(bowls))