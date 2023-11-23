def calculate_spare_bonus(bowls, bowl_index):
    bonus = 10

    if bowl_index + 2 < len(bowls):
        next_bowl = bowls[bowl_index + 2]
        
        if next_bowl == "/":
            bonus += 10
        elif next_bowl == "X":
            bonus += 10
            if bowl_index + 4 < len(bowls):
                next_next_bowl = bowls[bowl_index + 4]
                if next_next_bowl == "/":
                    bonus += 10
                else:
                    bonus += int(next_next_bowl)
        else:
            bonus += int(next_bowl)

    return bonus

def calculate_round_score(round_bowls):
    score = 0
    bowl_index = 0

    for frame in range(10):
        if round_bowls[bowl_index] == "X":
            score += 10
            if bowl_index + 2 < len(round_bowls):
                score += calculate_spare_bonus(round_bowls, bowl_index)
            bowl_index += 1
        else:
            frame_score = int(round_bowls[bowl_index])
            if round_bowls[bowl_index + 1] == "/":
                frame_score += 10
                if bowl_index + 2 < len(round_bowls):
                    frame_score += int(round_bowls[bowl_index + 2])
            else:
                frame_score += int(round_bowls[bowl_index + 1])
            score += frame_score
            bowl_index += 2

    return score

round_score = calculate_round_score("271141/1/81217-35X7-")
print(round_score)