```
def calculate_score(games):
    frames = games.replace('/', '')
    score = 0
    current_roll = 0
    frame_count = 1

    for i in range(len(frames)):
        if frames[i].isdigit():
            current_roll = current_roll * 10 + int(frames[i])
        else:
            if frame_count < 10:
                if current_roll == 10:
                    score += 10
                    current_roll = 0
                    frame_count += 1
                elif current_roll > 0:
                    if current_roll < 10:
                        score += current_roll + int(frames[i])
                    else:
                        score += 10
                    current_roll = 0
                    frame_count += 1
            else:
                if current_roll == 10:
                    score += 10
                    current_roll = 0
                    frame_count += 1
                elif current_roll > 0:
                    if frames[i] != 'X':
                        score += current_roll + int(frames[i])
                    else:
                        score += 10
                        current_frame_2_roll = int(frames[i-1])
                        for j in range(i+1, len(frames)):
                            if frames[j].isdigit():
                                current_frame_2_roll = current_frame_2_roll * 10 + int(frames[j])
                                break
                        score += current_frame_2_roll
                    current_roll = 0
                    frame_count += 1

    return score