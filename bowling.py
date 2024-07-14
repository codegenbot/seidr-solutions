def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit() and s[i + 1].isdigit():
            if int(s[i]) == 10:
                score += 10 + (10 if i < 18 else 0)
                frame += 1
            elif sum(map(int, s[i : i + 2])) < 10:
                score += sum(map(int, s[i : i + 2]))
                frame += 1
            else:
                score += sum(map(int, s[i : i + 2])) + bowling_score(s[i + 2 :]).get(
                    "bonus", 0
                )
                frame = min(frame + 1, 11)
        elif s[i].isdigit():
            if int(s[i]) == 10:
                score += 10
                frame += 1
            else:
                score += int(s[i])
                frame += 1
    return {"score": score, "bonus": (10 - score) if score < 10 else None}