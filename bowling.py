def calculate_score(bowls):
    score = 0
    rolls = []
    frame = 0
    
    for bowl in bowls:
        if bowl == "X":
            rolls.append(10)
            rolls.append(0)
            frame += 1
        elif bowl.isdigit() or bowl == "/":
            rolls.append(int(bowl))
            
        if len(rolls) >= frame * 2 + 2:
            frame_score = sum(rolls[frame * 2 : frame * 2 + 2])
            score += frame_score
            frame += 1

    return score