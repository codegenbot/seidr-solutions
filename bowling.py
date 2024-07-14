```
def bowling_score(frames):
    score = 0
    strike_count = 0
    spare_count = 0

    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
            strike_count += 1
        elif frames[i] == "/":
            score += 10
            spare_count += 1
        else:
            frame_points = int(frames[i:i+2])
            if frame_points == 10 and (strike_count > 0 or spare_count > 0):
                score += 10 + 10
            elif frame_points < 10 and strike_count > 0:
                score += 20
            else:
                score += frame_points * 10

    return score