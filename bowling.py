def calculate_score(bowls):
    score = 0
    frame = 0
    frame_score = 0
    consecutive_strikes = 0
    consecutive_spares = 0
    index = 0

    while frame < 10:
        bowl = bowls[index]
        if bowl == "X":
            score += 10
            frame_score += 10
            if consecutive_strikes:
                score += 10
                frame_score += 10
                if consecutive_strikes == 2:
                    score += 10
                    frame_score += 10
                    if index < len(bowls) - 3:
                        score += int(bowls[index + 2])
            if index < len(bowls) - 1:
                next_bowl = bowls[index + 1]
                if next_bowl == "/":
                    score += 10 - int(bowl)
                    frame_score += 10 - int(bowl)
                elif next_bowl == "X":
                    score += 10
                    frame_score += 10
                else:
                    score += int(next_bowl)
                    frame_score += int(next_bowl)
                    
            consecutive_strikes += 1
            index += 1
        elif bowl.isdigit():
            score += int(bowl)
            frame_score += int(bowl)
            if consecutive_spares:
                score += int(bowl)
                frame_score += int(bowl)
                consecutive_spares = 0
        elif bowl == "/":
            score += 10 - int(bowls[index - 1])
            frame_score += 10 - int(bowls[index - 1])
            if consecutive_strikes:
                score += 10
                frame_score += 10
                consecutive_strikes = 0
            if consecutive_spares:
                score += 10
                frame_score += 10
            consecutive_spares = 1

        if bowl != "X":
            consecutive_strikes = 0
        elif consecutive_strikes < 2:
            consecutive_strikes += 1

        if frame_score == 0:
            frame += 1
            frame_score = 0

        index += 1

    return score


bowls = input().strip().replace(" ", "")
print(calculate_score(bowls))