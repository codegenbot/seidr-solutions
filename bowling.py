```
def bowling_score(frames):
    score = 0
    def process_frames(i):
        nonlocal score
        if i > len(frames) - 2:
            return int(frames[i]) + (10 - int(frames[i])) * 1 if frames[i] != 'X' else 10
        elif frames[i] == 'X':
            return 10 + process_frames(i+1)
        elif frames[i] == '/':
            return 10 + process_frames(i+1)
        else:
            return int(frames[i]) * 1 + (10 - int(frames[i])) * 1 if int(frames[i]) + int(frames[i+1]) < 10 else 10
    while i < len(frames):
        score += process_frames(i)
        i += 2
    return score

print(bowling_score("61336222-6-415/5-2161"))