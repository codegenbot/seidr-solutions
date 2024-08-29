```
def bowling_game(frames):
    score = 0
    roll = 0
    for i in range(10):
        if frames[i].isdigit():
            roll += int(frames[i])
        else:
            if roll > 0:
                score += 10 + roll
                roll = 0
            elif frames[i] == 'X':
                score += 10
                roll = 0
            elif '-' in frames[i]:
                split_frames = frames[i].split('-')
                left_split, right_split = map(int, split_frames)
                if right_split < 10:
                    score += left_split + right_split
                else:
                    score += 10 + left_split
                    roll = right_split - 10
            elif '/':
                split_frames = list(map(int, frames[i].split('/')))
                score += sum(split_frames)
    if roll > 0:
        score += roll
    return score