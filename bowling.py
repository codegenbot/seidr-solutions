def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    is_strike = False
    is_spare = False
    prev_bowl = ""

    for bowl in bowls:
        if bowl == "/":
            continue
        
        if bowl == "X":
            score += 10
            frame_score = 10
            is_strike = True
        elif bowl == "-":
            frame_score = 0
        elif prev_bowl.isdigit() and prev_bowl != "0":
            score += 10 - int(prev_bowl)
            frame_score = 10
            is_spare = True
        elif bowl.isdigit():
            score += int(bowl)
            frame_score += int(bowl)

        if is_strike:
            if bowl != "X":
                score += int(bowl)
                frame_score += int(bowl)
            else:
                frame_score += 10
            is_strike = False
        if is_spare:
            score += int(bowl)
            frame_score += int(bowl)
            is_spare = False

        if bowl == "X" or bowl == "/":
            frame += 1

        prev_bowl = bowl

    if frame == 10:
        if is_strike or is_spare:
            score += frame_score
        elif bowls[-4:] == "XXX" or bowls[-3:] == "XX-" or bowls[-3:] == "X-X" or bowls[-3:] == "X-/" or bowls[-3:] == "X--":
            score += frame_score
        elif bowls[-2:] == "--":
            score += frame_score

    return score

bowls = input().strip().replace(" ", "")
print(calculate_score(bowls))