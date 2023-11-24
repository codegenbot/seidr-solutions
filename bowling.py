def calculate_score(bowls):
    score = 0
    frame_score = 0
    consecutive_spares = 0

    for i, bowl in enumerate(bowls):
        if bowl == "X":
            score += 10
            score += int(bowls[i+1]) + int(bowls[i+2])
            frame_score += 10
        elif bowl.isdigit():
            score += int(bowl)
            frame_score += int(bowl)
            if consecutive_spares:
                score += int(bowl)
                consecutive_spares = 0
        elif bowl == "/":
            score += 10 - int(bowls[i-1])
            frame_score += 10 - int(bowls[i-1])
            if i < len(bowls) - 1 and bowls[i + 1] == "X":
                score += 10
            elif i < len(bowls) - 1 and bowls[i + 1].isdigit():
                score += int(bowls[i + 1])
            consecutive_spares += 1

        if frame_score == 10:
            frame_score = 0

    return score

bowls = input().strip().replace(" ", "")
print(calculate_score(bowls))