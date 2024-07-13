import re

def calculate_score(frames):
    score = 0
    frames = re.sub('[^0-9X\/]', '', frames).upper()
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
        elif frames[i] == '/':
            score += int(frames[i-1]) + 10 - int(frames[i+1])
            i += 2
        else:
            frame = ''
            while i < len(frames) and frames[i].isdigit():
                frame += frames[i]
                i += 1
            if len(frame) == 1:
                score += int(frame)
            elif len(frame) == 2:
                score += int(frame[0]) + int(frame[1])
            else:
                score += int(frame[0]) + int(int(frame[0]) / 2)
    return score

frames = input("Enter the frames string: ")
print(calculate_score(frames))