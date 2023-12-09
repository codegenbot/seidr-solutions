def calculate_frame_score(bowls, index):
    first_bowl = int(bowls[index]) if bowls[index].isdigit() else 0
    second_bowl = int(bowls[index+1]) if bowls[index+1].isdigit() else 0
    return first_bowl + second_bowl