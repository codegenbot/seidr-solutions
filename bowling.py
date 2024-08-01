def bowling_score(input_str):
    score = 0
    roll = [int(x) for x in re.findall("\d", input_str)]
    frame = 0
    while len(roll) > 0:
        if roll[0] == "/":
            score += 10
            del roll[0]
            continue
        if roll[0] == "X":
            score += 10
            del roll[0]
            continue
        if len(roll) >= 2 and int("".join(map(str, roll[:2]))) < 10:
            score += sum(roll[:2])
            del roll[:2]
            continue
        score += roll[0]
        del roll[0]
    return score