def bowling(input_str):
    score = 0
    frame = 1
    frame_score = 0
    prev_frame_score = 0
    prev_frame_strike = False
    prev_frame_spare = False
    prev_frame_strike_count = 0
    prev_frame_spare_count = 0
    
    for i in range(len(input_str)):
        if input_str[i] == 'X':
            score += 10
            if frame < 10:
                if prev_frame_strike:
                    score += 10
                    if prev_frame_strike_count == 1:
                        score += 10
                    elif prev_frame_strike_count == 2:
                        score += 20
                    prev_frame_strike_count += 1
                elif prev_frame_spare:
                    score += 10
                    prev_frame_spare_count += 1
                prev_frame_strike = True
                prev_frame_spare = False
                frame += 1
            else:
                if prev_frame_strike:
                    score += 10
                    if prev_frame_strike_count == 1:
                        score += 10
                    elif prev_frame_strike_count == 2:
                        score += 20
                    prev_frame_strike_count += 1
                elif prev_frame_spare:
                    score += 10
                    prev_frame_spare_count += 1
        elif input_str[i] == '/':
            score += 10 - prev_frame_score
            if frame < 10:
                if prev_frame_strike:
                    score += 10
                    if prev_frame_strike_count == 1:
                        score += 10
                    elif prev_frame_strike_count == 2:
                        score += 20
                    prev_frame_strike_count += 1
                elif prev_frame_spare:
                    score += 10
                    prev_frame_spare_count += 1
                prev_frame_strike = False
                prev_frame_spare = True
                frame += 1
            else:
                if prev_frame_strike:
                    score += 10
                    if prev_frame_strike_count == 1:
                        score += 10
                    elif prev_frame_strike_count == 2:
                        score += 20
                    prev_frame_strike_count += 1
                elif prev_frame_spare:
                    score += 10
                    prev_frame_spare_count += 1
        elif input_str[i] == '-':
            if frame < 10:
                if prev_frame_strike:
                    score += 10
                    if prev_frame_strike_count == 1:
                        score += 10
                    elif prev_frame_strike_count == 2:
                        score += 20
                    prev_frame_strike_count += 1
                elif prev_frame_spare:
                    score += 10
                    prev_frame_spare_count += 1
                frame += 1
            else:
                if prev_frame_strike:
                    score += 10
                    if prev_frame_strike_count == 1:
                        score += 10
                    elif prev_frame_strike_count == 2:
                        score += 20
                    prev_frame_strike_count += 1
                elif prev_frame_spare:
                    score += 10
                    prev_frame_spare_count += 1
        else:
            score += int(input_str[i])
            frame_score = int(input_str[i])
            if frame < 10:
                if prev_frame_strike:
                    score += frame_score
                    if prev_frame_strike_count == 1:
                        score += frame_score
                    elif prev_frame_strike_count == 2:
                        score += frame_score
                    prev_frame_strike_count += 1
                elif prev_frame_spare:
                    score += frame_score
                    prev_frame_spare_count += 1
                prev_frame_strike = False
                prev_frame_spare = False
            else:
                if prev_frame_strike:
                    score += frame_score
                    if prev_frame_strike_count == 1:
                        score += frame_score
                    elif prev_frame_strike_count == 2:
                        score += frame_score
                    prev_frame_strike_count += 1
                elif prev_frame_spare:
                    score += frame_score
                    prev_frame_spare_count += 1
            prev_frame_score = frame_score
    
    return score

input_str = input()
print(bowling(input_str))