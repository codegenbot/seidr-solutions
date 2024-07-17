def bowling(score):
    score = score.replace("/", "")
    frames = [0] * 10
    i = 0
    while i < len(score):
        if score[i].isdigit():
            j = i
            while i < len(score) and score[i].isdigit():
                i += 1
            frames[j // 2] = int(score[j:i])
        else:
            i += 1
    return sum(frames)