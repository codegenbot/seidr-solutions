def calculate_score(frames):
    score = 0
    frame = []
    frames_list = list(frames)
    for i in range(len(frames)):
        if frames[i].isdigit():
            frame.append(int(frames[i]))
        else:
            if 'X' in str(frame) or '/' in str(frame):
                if len(frame) == 2:
                    if 'X' in str(frame):
                        score += 10 + max(frame)
                    elif '/' in str(frame):
                        next_frame = [int(x) for x in str(''.join(frames_list[i+1:]))]
                        score += 10 + sum(min(next_frame))
                else:
                    if 'X' in str(frame):
                        score += 10 + sum(max(frame, min(frame)))
                    elif '/' in str(frame):
                        next_frame = [int(x) for x in str(''.join(frames_list[i+1:]))]
                        score += 10 + max(min(next_frame), max(frame))
                frame = []
            else:
                if len(frame) == 1:
                    if 'X' in str(frame):
                        score += 10
                    elif frame[0] < 10:
                        score += frame[0] + 1
                    frame = []
                else:
                    if '/' not in str(''.join(frames_list[:i])):
                        score += sum(frame)
            if len(frame) > 1 and '/' in str(''.join(frames_list[:i])):
                score += max(frame)
    return score

frames = input("Enter the frames string: ")
print(calculate_score(frames))