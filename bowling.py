```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            score += 10
            roll_index += 1
        elif rolls[roll_index:roll_index+2].isdigit():
            points = int(rolls[roll_index:roll_index+2])
            if points < 10:
                score += points
                roll_index += 2
            else:
                bonus = int(rolls[roll_index+2])
                score += 10 + bonus
                roll_index += 3
        elif rolls[roll_index] == '/':
            points1 = int(rolls[roll_index-1])
            points2 = int(rolls[roll_index+1])
            score += points1 + points2
            roll_index += 2
    return score