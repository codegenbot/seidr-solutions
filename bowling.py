def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    prev_frame_score = 0
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
            if prev_bowl.isdigit() and prev_bowl != "0":
                score += int(prev_bowl)
                frame_score += int(prev_bowl)

            if prev_bowl == "X":
                score += 10
                frame_score += 10
        elif bowl == "-":
            frame_score = 0
        elif prev_bowl.isdigit() and prev_bowl != "0":
            if prev_bowl == "X":
                score += 10 - int(bowls[-1])
            else:
                score += 10 - int(prev_bowl)
            frame_score = 10
            is_spare = True
        elif bowl.isdigit():
            score += int(bowl)
            frame_score += int(bowl)

        if is_strike and bowl.isdigit():
            score += int(bowl)
            frame_score += int(bowl)
            if prev_bowl == "X":
                score += int(bowl)
                frame_score += int(bowl)
            is_strike = False

        if is_spare:
            score += int(bowl)
            frame_score += int(bowl)
            is_spare = False

        prev_bowl = bowl

        if frame > 1:
            score += prev_frame_score

        prev_frame_score = frame_score
        frame += 1

    if frame == 10:
        if is_spare:
            score += int(bowls[-1])
        elif is_strike and len(bowls) > 1:
            score += int(bowls[-2]) + int(bowls[-1])

    return score


bowls = input().strip().replace(" ", "")
print(calculate_score(bowls))