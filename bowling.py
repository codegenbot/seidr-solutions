```
def bowling_score(game):
    score = 0
    roll_count = 1
    current_frame = [0, 0]
    
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            if int(game[i]) == 10:
                score += 10 + (10 - 1) * 2
                roll_count += 1
            elif game[i+1].isdigit() and int(game[i:i+2]) <= 10:
                score += int(game[i:i+2])
                current_frame[0] = int(game[i:i+2])
                roll_count += 1
            else:
                current_frame[1] = int(game[i])
                if current_frame[0] + current_frame[1] == 10:
                    score += 10 + (10 - 1) * 2
                    roll_count += 1
                elif current_frame[0] + current_frame[1] > 10:
                    score += 10 + current_frame[0]
                    current_frame = [0, 0]
                else:
                    score += current_frame[0] + current_frame[1]
                    if roll_count < 10:
                        while game[i+2].isdigit() and int(game[i+2]) != 10:
                            i += 1
                            if i >= len(game):
                                break
                            current_frame[0] = int(game[i])
                            score += current_frame[0]
                            roll_count += 1
                    current_frame = [0, 0]
        else:
            if game[i] == 'X':
                score += 10 + (10 - 1) * 2
                roll_count += 1
            elif game[i+1].isdigit() and int(game[i:i+2]) <= 10:
                current_frame[0] = int(game[i:i+2])
                score += int(game[i:i+2])
                roll_count += 1
            else:
                if game[i-1].isdigit():
                    current_frame[1] = int(game[i-1])
                    if current_frame[0] + current_frame[1] == 10:
                        score += 10 + (10 - 1) * 2
                        roll_count += 1
                    elif current_frame[0] + current_frame[1] > 10:
                        score += 10 + current_frame[0]
                        current_frame = [0, 0]
                    else:
                        score += current_frame[0] + current_frame[1]
                        if roll_count < 10:
                            while game[i+2].isdigit() and int(game[i+2]) != 10:
                                i += 1
                                if i >= len(game):
                                    break
                                current_frame[0] = int(game[i])
                                score += current_frame[0]
                                roll_count += 1
                    current_frame = [0, 0]

    return score