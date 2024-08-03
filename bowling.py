def bowling_score(frames):
    score = 0
    frame = 1
    rolls = [0] * 21
    for char in frames:
        if char == "X":
            rolls[frame] = 10
            frame += 2
        elif char == "/":
            rolls[frame] = 10 - rolls[frame - 1]
            frame += 1
        elif char == "-":
            rolls[frame] = 0
            frame += 1
        else:
            rolls[frame] = int(char)
            frame += 1
    frame = 1
    for _ in range(10):
        if rolls[frame] == 10:
            score += 10 + rolls[frame + 1] + rolls[frame + 2]
            frame += 1
        elif rolls[frame] + rolls[frame + 1] == 10:
            score += 10 + rolls[frame + 2]
            frame += 2
        else:
            score += rolls[frame] + rolls[frame + 1]
            frame += 2
    return score


frames = input()
print(bowling_score(frames))