```
def bowling_score(bowling):
    score = 0
    frame_num = 1
    for bowl in bowling:
        if bowl == 'X':
            score += 10 + (10 if frame_num < 9 else 0)
            frame_num += 1
        elif bowl == '/':
            score += 10
            frame_num += 1
        else:
            strike = False
            current_frame_score = int(bowl[0])
            if len(bowl) > 1 and bowl[1] == '/':
                current_frame_score += 10
                strike = True
            elif len(bowls) > 2 and bowl[1:] == '42':
                score += 10 + current_frame_score
                frame_num += 1
                continue
            if not strike:
                if current_frame_score < 10:
                    for i in range(10 - current_frame_score):
                        score += int(bowls.pop(0).replace('/','')[0])
                    frame_num += 1
    return score