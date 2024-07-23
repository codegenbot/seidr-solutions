def bowling_score(frames):
    score = 0
    prev_was_strike = False
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 10
            prev_was_strike = True
        elif frames[i] in '1234567890/':
            if frames[i] == '/':
                try:
                    score += sum(int(x) for x in frames[(i + 1):].lstrip('/').replace('-', '')) * (prev_was_strike)
                except ValueError:
                    score += sum(int(x) for x in frames[(i + 1):].lstrip('/').replace('-', ''))
            else:
                try:
                    score += int(frames[i]) + sum(int(x) for x in frames[(i + 1)].lstrip('/').replace('-', '')) * (prev_was_strike)
                except ValueError:
                    score += int(frames[i])
        prev_was_strike = False if i == len(frames) - 1 else (frames[i] != 'X')
    return score