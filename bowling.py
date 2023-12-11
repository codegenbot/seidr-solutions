import re

def calculate_score(rounds):
    total_score = 0
    remaining_frames = 10
    current_frame = 0
    bowls = re.findall(r"[0-9X/-]", rounds)

    for i in range(len(bowls)):
        if remaining_frames == 0:
            break
        
        bowl = bowls[i]
        frame_points = get_bowl_points(bowl)
        total_score += frame_points

        if bowl == "X":
            if remaining_frames == 1: 
                total_score += bonus_points(bowls[i+1], bowls[i+2])
            else:
                total_score += bonus_points(bowls[i+1], bowls[i+2])
                remaining_frames -= 1
        else:
            if bowl == "/" and remaining_frames == 1:
                total_score += bonus_points(bowls[i+1], "X")
            elif bowl == "/":
                total_score += bonus_points(bowls[i+1], bowls[i+2])
                remaining_frames -= 1
            elif remaining_frames == 1:
                total_score += bonus_points(bowl, bowls[i+1])
                remaining_frames -= 1
            else:
                remaining_frames -= 1

        current_frame += 1
    
    return total_score

def get_bowl_points(bowl):
    if bowl == "X":
        return 10
    elif bowl == "/":
        return 10
    else:
        return int(bowl)

def bonus_points(bowl1, bowl2):
    if bowl1 == "X" or bowl1 == "/":
        return get_bowl_points(bowl1) + get_bowl_points(bowl2)
    else:
        return get_bowl_points(bowl1) + get_bowl_points(bowl2)