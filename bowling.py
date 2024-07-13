def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == "X":
            score += 30
            roll_index += 1
        elif rolls[roll_index] == "/":
            score += 10 + int(rolls[roll_index + 1])
            roll_index += 2
        else:
            frame_score = 0
            for i in range(2):
                if rolls[roll_index] == "X":
                    score += 10 + (10 - i)
                    roll_index += 1
                    break
                elif rolls[roll_index] == "/":
                    frame_score += 10
                    roll_index += 1
                    break
                else:
                    frame_score += int(rolls[roll_index])
                    roll_index += 1
            score += frame_score
    return score