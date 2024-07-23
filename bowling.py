def bowling_score(rolls):
    score = 0
    roll = 0
    frame = 1
    while roll < len(rolls):
        if rolls[roll] != "/":
            strike = False
            for i in range(2):
                if roll + i >= len(rolls) or rolls[roll + i] == "/":
                    score += 10
                    strike = True
                    break
                score += int(rolls[roll + i])
            if not strike:
                frame_score = int(rolls[roll]) + int(rolls[roll + 1])
                score += frame_score
        else:
            frame_score = int(rolls[:roll].count("X")) * 10
            score += frame_score
        roll += 2
        frame += 1
    return score