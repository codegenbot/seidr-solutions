def bowling_score(frames):
    score = 0
    frame_number = 1
    for frame in frames:
        if len(frame) == 2 and frame[1] == '/':
            strike = False
            while True:
                if not strike and len(frames[frame_number]) > 1 and frames[frame_number][1] == 'X':
                    score += 10 + int(frames[frame_number][0])
                    break
                elif not strike and frames[frame_number].split()[0] != 'X' and int(frames[frame_number].split()[0]) + int(frames[frame_number].split()[1]) < 10:
                    score += int(frames[frame_number].split()[0])
                    break
                else:
                    if frame[0] == 'X':
                        score += 30
                    elif int(frame) == 10:
                        score += 10
                    else:
                        score += int(frame)
                    strike = True
                frame_number += 1
        elif len(frame) > 2:
            while len(frames[frame_number]) > 2:
                if frames[frame_number].split()[0] != 'X' and int(frames[frame_number].split()[0]) + int(frames[frame_number].split()[1]) < 10:
                    score += int(frames[frame_number].split()[0])
                    break
                else:
                    if frame[0] == 'X':
                        score += 30
                    elif int(frame) == 10:
                        score += 10
                    else:
                        score += int(frame)
            score += int(frames[frame_number].split()[1])
        else:
            if frame[0] == 'X':
                score += 30
            elif int(frame) == 10:
                score += 10
            else:
                score += int(frame)
        frame_number += 1
    return score