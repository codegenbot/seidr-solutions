```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for char in frames:
        if char.isdigit():
            strike = False
            spare = False
            total_pins = int(char)
            if frame_num == 10 and total_pins < 10:
                return "Invalid input"
            if total Pins > 10:
                return "Invalid input"
            while True:
                if strike:
                    break
                if spare:
                    score += 10
                    break
                if total_pins >= 10:
                    score += 10
                    total_pins -= 10
                else:
                    score += total_pins
                    total_pins = 0
                frame_num += 1
                if frame_num > 10:
                    return "Invalid input"
                char = frames[frames.index(char) + 1]
                if char.isdigit():
                    strike = False
                    spare = False
                    total_pins = int(char)
                    continue
                elif char == 'X':
                    score += 10
                    strike = True
                else:
                    if total_pins > 0 and total_pins < 10:
                        score += total_pins
                        break
                    elif total Pins >= 10:
                        score += 10
                        total pins -= 10
                        break
        elif char == 'X':
            score += 10
            strike = True
        else:
            if frame_num > 9:
                return "Invalid input"
            if frame_num < 10 and char.isdigit():
                spare = True
    return score