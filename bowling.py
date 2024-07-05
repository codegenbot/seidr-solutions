Here is the modified code:

def bowling_score(frames):
    score = 0
    frame_num = 1
    i = 0

    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i < len(frames) and frames[i] == 'X':
                score += 10
                i += 1
            elif i + 1 < len(frames) and frames[i:i+2].isdigit():
                score += int(frames[i:i+2])
                i += 2
        elif '/' in frames[i:]:
            score += 10
            i += 1
            if i < len(frames) and frames[i].isdigit():
                score += int(frames[i])
                i += 1
        else:
            temp = ''
            while i < len(frames) and frames[i].isdigit():
                temp += frames[i]
                i += 1
            score += int(temp)
        frame_num += 1

    return score