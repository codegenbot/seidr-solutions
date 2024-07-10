if rolls[i] == "/":
            score += 10 - int(rolls[i - 1])
            if frame < 10 and i + 2 < len(rolls) and rolls[i + 2] != "X":
                score += int(rolls[i + 1]) if rolls[i + 1].isdigit() else (10 - int(rolls[i - 1]))
            frame += 1