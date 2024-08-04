```
def bowling_score(bowling_string):
    score = 0
    frame_count = 0
    for i in range(0, len(bowling_string), 2):
        if bowling_string[i:i+1].isdigit():
            strike = False
            if bowling_string[i:i+2] == '10':
                score += 10
                frame_count += 1
                continue
            else:
                frame_score = int(bowling_string[i:i+2])
                if i+3 < len(bowling_string):
                    next_ball = bowling_string[i+3]
                    if next_ball.isdigit():
                        score += frame_score + int(next_ball)
                        frame_count += 1
                    elif next_ball == 'X':
                        strike = True
                    else:
                        non_strike_frame_score = int(next_ball) + int(bowling_string[i+4:i+6])
                        score += frame_score + non_strike_frame_score
                        frame_count += 2
                else:
                    score += frame_score
                    frame_count += 1
        elif bowling_string[i] == 'X':
            if frame_count < 9 and i+3 < len(bowling_string):
                score += 10
                frame_count += 1
            else:
                score += 10
                frame_count += 1
        return score