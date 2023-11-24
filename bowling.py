def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    consecutive_turns = 0

    for i in range(len(bowls)):
        bowl = bowls[i]
        if bowl == "X":
            score += 10
            frame_score += 10
            if consecutive_turns > 0:
                score += 10
                frame_score += 10
                if consecutive_turns == 2:
                    score += 10
                    frame_score += 10
                    if i < len(bowls) - 3:
                        score += int(bowls[i + 1])
            consecutive_turns += 1
        elif bowl.isdigit():
            score += int(bowl)
            frame_score += int(bowl)
            consecutive_turns = 0
        elif bowl == "/":
            score += 10 - int(bowls[i - 1])
            frame_score += 10 - int(bowls[i - 1])
            if consecutive_turns > 0:
                score += 10
                frame_score += 10
                consecutive_turns = 0
            consecutive_turns += 1

        if bowl != "X" and bowl != "/":
            consecutive_turns = 0

        if frame_score == 10 or bowl == "X":
            frame += 1
            frame_score = 0

    return score

bowls = input().strip().replace(" ", "")
print(calculate_score(bowls))