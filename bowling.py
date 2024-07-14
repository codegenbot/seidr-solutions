def bowling_score(game):
    score = 0
    frame_count = 0
    for i in range(len(game)):
        if game[i] == "X":
            score += 10 + (10 if i < len(game) - 1 and game[i + 1] == "X" else 0)
            frame_count += 1
        elif game[i] == "/":
            strike = False
            for j in range(i, min(i + 3, len(game))):
                if game[j] == "X":
                    score += 10 + (
                        10 if j < len(game) - 1 and game[j + 1] == "X" else 0
                    )
                    frame_count += 2
                    strike = True
                    break
            if not strike:
                score += int(game[i - 1]) + int(game[i + 1])
                frame_count += 1
        elif game[i].isdigit():
            total_pins = 0
            for j in range(i, min(i + 3, len(game))):
                if game[j].isdigit():
                    total_pins += int(game[j])
                else:
                    break
            score += total_pins
            frame_count += 1
    return score