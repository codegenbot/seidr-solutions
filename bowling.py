```
def bowling_score(bowling_game):
    score = 0
    roll = 0
    for frame in range(10):
        if re.match('X', bowling_game[roll:roll+2]):
            score += 10 + int(bowling_game[roll+1])
            roll += 2
        elif re.match('/[0-9]', bowling_game[roll:roll+3]):
            score += int(bowling_game[roll+1]) + int(bowling_game[roll+2])
            roll += 3
        else:
            frame_score = 0
            for i in range(2):
                if re.match('X', bowling_game[roll+i:roll+i+2]):
                    score += 10
                    roll += 2
                    break
                elif int(bowling_game[roll+i]) + int(bowling_game[roll+i+1]) == 10:
                    frame_score = int(bowling_game[roll+i]) + int(bowling_game[roll+i+1])
                    score += frame_score
                    roll += 2
                    break
                else:
                    frame_score += int(bowling_game[roll+i])
            if frame_score < 10:
                score += frame_score
                roll += 2
        print(score)
    return score