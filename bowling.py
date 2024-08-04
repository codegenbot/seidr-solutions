def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            parts = [int(x) for x in re.findall(r"\d", frames[i * 2 : i * 2 + 2])]
            if len(parts) == 1:
                score += 10
                strike = True
            elif len(parts) == 2 and sum(parts) == 10:
                score += 10
                spare = True
            else:
                score += parts[0] + parts[1]
        else:
            if frames[i * 2 : i * 2 + 2] == "X":
                score += 10
                strike = True
            elif "/" in frames[i * 2 + 1 :]:
                spare = True
                parts = [int(x) for x in re.findall(r"\d", frames[i * 2 : i * 2 + 3])]
                score += sum(parts)
            else:
                parts = [int(x) for x in re.findall(r"\d", frames[i * 2 : i * 2 + 2])]
                score += sum(parts)
        if strike and i < 9:
            score += bowling_score(frames[10:])
        elif spare and i < 9:
            score += bowling_score(frames[11:])
    return score