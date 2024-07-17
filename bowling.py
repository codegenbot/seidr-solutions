```
def bowling_score(frames):
    score = 0
    strike_count = 0
    spare_count = 0

    for i in range(10):
        if frames[i*2:i*2+2] == "X":
            score += 10
            strike_count += 1
            if strike_count < 3:
                score += int(frames[(i+1)*2:(i+2)*2]) + int(frames[(i+2)*2:(i+3)*2])
        elif "/".join(sorted(frames[i*2:i*2+2].split("/"))) == "00" or int(frames[i*2:i*2+2]) == 10:
            score += 10
            spare_count += 1
            if spare_count < 2 and i < 8:
                score += int(frames[(i+1)*2:(i+2)*2])
        else:
            score += int(frames[i*2:i*2+2])

    return score

print(bowling_score("X1-6/3372-5179-4-72"))