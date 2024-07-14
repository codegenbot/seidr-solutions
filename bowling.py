def bowling_score(game):
    score = 0
    for i in range(10):
        if game[i].isdigit():
            score += int(game[i])
        elif "/" in game[i]:
            strike_or_spare = True
            strike_count = 1
            while i < len(game) - 1 and "/" in game[i + 1 :]:
                if game[i + 1 :].count("/") > 1:
                    break
                i += 1
                strike_count += 1
            if strike_count == 2:
                score += int(game[i].split("/")[0]) + int(game[i].split("/")[1])
            elif strike_count == 3:
                score += 10 + max(int(x) for x in game[i + 1 : i + 3].replace("/", ""))
        else:
            spare_or_strike = game[i]
            if spare_or_strike in "X":
                score += 10
            elif spare_or_strike in "/":
                score += int(spare_or_strike.split("/")[0])
            i += len(spare_or_strike) - 1
    return score