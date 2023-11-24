def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    consecutive_strikes = 0
    consecutive_spares = 0

    for bowl in bowls:
        if bowl == "X":
            score += 10
            frame_score += 10
            if consecutive_strikes:
                score += 10
                frame_score += 10
                if consecutive_strikes == 2:
                    score += 10
                    frame_score += 10
                consecutive_strikes = 0
            if consecutive_spares:
                score += 10 - int(bowls[-1])
                frame_score += 10 - int(bowls[-1])
                consecutive_spares = 0
        elif bowl.isdigit():
            score += int(bowl)
            frame_score += int(bowl)
            if consecutive_spares:
                score += int(bowl)
                frame_score += int(bowl)
                consecutive_spares = 0

        if bowl == "/":
            score += 10 - int(bowls[-1])
            frame_score += 10 - int(bowls[-1])
            if consecutive_strikes:
                score += 10
                frame_score += 10
                consecutive_strikes = 0
            consecutive_spares += 1

        if bowl != "X":
            consecutive_strikes = 0
        elif consecutive_strikes < 2:
            consecutive_strikes += 1

        frame_score %= 10
        if frame_score == 10:
            frame += 1
            frame_score = 0
        elif frame_score == 0:
            frame += 1

    return score

bowls = input().strip().replace(" ", "")
print(calculate_score(bowls))