```Python
def calculate_score(frames):
    frames = [int(x) for x in str(frames)]
    score = 0
    roll = 1
    for i in range(len(frames)):
        if frames[i] == 10:
            score += frames[i]
        elif frames[i] == '/':
            first_roll = frames[i - 2] + frames[i - 1]
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            roll += 2
        else:
            if roll == 1:
                score += frames[i] + frames[i+1]
            elif roll == 2:
                score += max(frames[i-1:i+1])
            roll -= 1
    return score

frames = input("Enter the frames string: ")
print(calculate_score(frames))