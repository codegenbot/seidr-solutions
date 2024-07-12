def bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    for i, bowl in enumerate(bowls):
        if bowl == "X":
            score += 10
            if frame < 10:
                score += sum(
                    map(
                        lambda x: 10 if x == "X" else (int(x) if x.isdigit() else 0),
                        bowls[i + 1 : i + 3],
                    )
                )
            frame += 1
        elif bowl == "/":
            score += 10 - frame_score
            if frame < 10:
                score += 10 if bowls[i + 1] == "X" else int(bowls[i + 1])
            frame += 1
        else:
            score += int(bowl)
            frame_score = int(bowl)
            if frame % 2 == 0:
                frame += 1
    return score


bowls = input().strip()
print(bowling_score(bowls))