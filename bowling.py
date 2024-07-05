```
def bowling_score(frames):
    total_score = 0
    current_frame_score = 0
    i = 0
    
    while i < len(frames):
        if frames[i] == 'X':
            current_frame_score = 10
            i += 1
            if i < len(frames) and frames[i] == 'X':
                total_score += current_frame_score + current_frame_score
                current_frame_score = 0
                i += 1
            elif i + 1 < len(frames) and frames[i:i+2].isdigit():
                total_score += current_frame_score + int(frames[i:i+2])
                current_frame_score = 0
                i += 2
        elif '/' in frames[i:]:
            current_frame_score = 10 - int(frames[i+1])
            if i + 2 < len(frames) and frames[i+2].isdigit():
                total_score += current_frame_score + int(frames[i+2])
            else:
                total_score += current_frame_score
            i += 2
        else:
            temp = ''
            while i < len(frames) and frames[i].isdigit():
                temp += frames[i]
                i += 1
            if len(temp) == 1:
                total_score += int(temp)
                current_frame_score = 0
            else:
                current_frame_score += int(temp)
                if i + 1 < len(frames) and frames[i:i+2].isdigit():
                    total_score += current_frame_score + int(frames[i:i+2])
                    current_frame_score = 0
                    i += 2
                else:
                    total_score += current_frame_score + int(temp)
                    current_frame_score = 0
    
    return total_score