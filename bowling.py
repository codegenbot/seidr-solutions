def calculate_bowling_score(round_str):
    score = 0
    frames = round_str.split("/")

    for frame in frames:
        if frame == "X":
            score += 10
        else:
            for i in range(len(frame)):
                if frame[i] == "-":
                    score += 0
                elif frame[i] == "X":
                    score += 10
                else:
                    score += int(frame[i])
    
    return score

round_str = input()
print(calculate_bowling_score(round_str))