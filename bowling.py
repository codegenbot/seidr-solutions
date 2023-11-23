def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    frame_count = 0
    is_strike = False
    is_spare = False
    for bowl in bowls:
        if bowl == 'X':
            # code for 'X' case
        elif bowl == '/':
            # code for '/' case
        elif bowl == '-':
            # code for '-' case
        else:
            score += int(bowl)
            if frame_count < 9:
                frame_score += int(bowl)
                # check for spare
                if frame_score == 10:
                    is_spare = True
                    frame_score = 0
                    frame_count += 1
                else:
                    is_spare = False
                # check for strike
                if is_strike:
                    score += int(bowl)
                    is_strike = False
                # check for spare
                if is_spare:
                    score += int(bowl)
                    is_spare = False
            else:
                # check for strike
                if is_strike:
                    score += int(bowl)
                    is_strike = False
                # check for spare
                if is_spare:
                    score += int(bowl)
                    is_spare = False
    return score

bowls = input()
print(calculate_bowling_score(bowls))