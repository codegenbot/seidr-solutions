```
def bowling_score(frames):
    score = 0
    strike_count = 0
    spare_count = 0

    for i in range(10):
        if frames[i*2:i*2+2] == "X":
            score += 10 + int(frames[11-2*i:13-2*i]) + int(frames[12-2*i])
            strike_count += 1
        elif "/".join(sorted(frames[i*2:i*2+2].split("/"))) == "00" or int(frames[i*2:i*2+2]) == 10:
            score += 10 + int(frames[3-2*i:4-2*i])
            spare_count += 1
        else:
            parts = frames[i*2:i*2+2].split("/")
            if len(parts) > 1:
                score += 10 - int(parts[0])
            elif int(parts[0]) == 10:
                score += 10
            else:
                score += int(parts[0])
    return score

print(bowling_score("X1-6/3372-5179-4-72"))