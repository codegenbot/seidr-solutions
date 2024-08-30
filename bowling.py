```
def bowling_score(bowling_string):
    score = 0
    for frame in range(10):
        if '/' in str(frame+1)+bowling_string[10*frame:10*frame+2]:
            strikes = bowling_string[10*frame:10*frame+3].count('X')
            bonus = 10 * (strikes + 1) if strikes > 0 else 0
        elif bowling_string[10*frame:10*frame+2] == 'XX':
            score += 20
        elif bowling_string[10*frame:10*frame+2].count('X') == 1:
            strike_frame = [str(frame+1)+bowling_string[10*frame:10*frame+2]]
            while len(strike_frame) < 3 and sum(1 for x in strike_frame[-1] if x == 'X'):
                frame += 1
                strike_frame.append(str(frame+1)+bowling_string[10*frame:10*frame+2])
            bonus = sum(1 for x in bowling_string[20*frame-10*frame:20*frame].replace('/','') if x != 'X')
        else:
            score += min(sum(map(int,map(str, bowling_string[10*frame:10*frame+2]))) or [0, 0], 10) + (10 - sum(map(int,map(str, bowling_string[10*frame:10*frame+2]))) or [0, 0]) if sum(map(int,map(str, bowling_string[10*frame:10*frame+2]))) > 10 else 0
        score += bonus
    return score