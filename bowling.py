Here is the Python solution:

def bowling_game(score):
    score = list(map(int, re.sub('[^0-9]', '', score)))
    total_score = 0
    roll = 0
    frame = 1
    while roll < len(score):
        if score[roll] == 10:
            total_score += 10 + (score[roll+1] if roll+2 <= len(score) else 0)
            roll += 2
        elif score[roll] + score[roll+1] >= 10:
            total_score += 10
            roll += 2
        else:
            total_score += score[roll] + score[roll+1]
            roll += 2
    return total_score