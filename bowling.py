```
def bowling_score(frames):
    current_frame_score = 0
    total_score = 0
    i = 0

    while i < len(frames):
        if frames[i] == 'X':
            current_frame_score = 10
            total_score += 10
            i += 1
            if i < len(frames) and frames[i] == 'X':
                total_score += 10
                i += 1
            elif i + 1 < len(frames) and frames[i:i+2].isdigit():
                current_frame_score = int(frames[i:i+2])
                total_score += 10 + current_frame_score
                i += 2
        elif '/' in frames[i:]:
            current_frame_score = 10 - int(frames[i+1])
            total_score += 10
            i += 2
        else:
            temp = ''
            while i < len(frames) and frames[i].isdigit():
                temp += frames[i]
                i += 1
            current_frame_score = int(temp)
            if current_frame_score + int(frames[i]) >= 10:
                total_score += 10
            else:
                total_score += current_frame_score + int(frames[i])
            i += 1

    return total_score