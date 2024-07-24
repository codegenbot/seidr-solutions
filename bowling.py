def bowling(score):
    score = score.replace("/", "")
    total_score = 0
    for i in range(0, len(score), 1):
        if score[i].isdigit():
            temp_score = int(score[i])
            if i < len(score) - 1 and score[i + 1] == "X":
                total_score += 30
            elif (
                i < len(score) - 1
                and score[i + 1].isdigit()
                and str(temp_score) + score[i + 1] <= "10"
            ):
                total_score += temp_score + int(score[i + 1])
            else:
                if i < len(score) - 2 and score[i + 2] == "X" and temp_score == 10:
                    total_score += 30
                elif (
                    i < len(score) - 2
                    and score[i + 2].isdigit()
                    and str(temp_score) + score[i + 1] + score[i + 2] <= "20"
                ):
                    total_score += temp_score + int(score[i + 1]) + int(score[i + 2])
                else:
                    total_score += temp_score
    return total_score