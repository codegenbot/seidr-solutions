```
def bowling_score(frames):
    '''
    Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, 
    return the score of that round.
    '''
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame == 10:
                break
            frame += 1
        elif char == '/':
            score += 10 - (int(frames[frames.index(char) - 1]) + int(frames[frames.index(char) + 1]))
            frame += 1
    return score