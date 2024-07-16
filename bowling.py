def bowling_game(frames):
    total_score = 0
    roll = list(map(int, frames.replace('/', '')))
    for i in range(0, 10):
        if len(str(roll[i*2:i*2+2])) == 3:
            if str(roll[i*2:i*2+2])[0] != 'X':
                total_score += 10 + (str(roll[i*2:i*2+2])[1:]-48)*10
            else:
                total_score += 10 + roll[-1-i*2:-1-(i+1)*2].count('X') * 10 + max(roll[-1-i*2:-1-(i+1)*2])-48)*10
        elif str(roll[i*2:i*2+2])[0] == 'X':
            total_score += 10 + roll[-1-i*2:-1-(i+1)*2].count('X') * 10 + max(roll[-1-i*2:-1-(i+1)*2])-48)*10
        else:
            if str(roll[i*2:i*2+2])[0] == 'S':
                total_score += 15
            elif str(roll[i*2:i*2+2])[0] == 'T':
                total_score += 10
            elif str(roll[i*2:i*2+2])[1:]-48 >=5:
                total_score += 10 + (str(roll[i*2:i*2+2])[1:]-48)*1
    return total_score