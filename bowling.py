Here's the solution:

def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            if i < 8:
                score += 30
            else:
                score += 10 + (int(frames[9-i]) * 10)
        elif '-' not in frames[i]:
            first_roll = int(frames[i].split('/')[0])
            second_roll = int(frames[i].split('/')[-1])
            if first_roll == 10:
                score += 20
            else:
                score += first_roll + second_roll
        else:
            first_rolls = list(map(int, frames[i].split('/')[:-1]))
            second_rolls = list(map(int, frames[i].split('/')[-1]))
            for j in range(len(first_rolls)):
                if sum(first_rolls[:j+1]) < 10:
                    score += sum(first_rolls[:j+1])
                elif sum(first_rolls[:j+1]) == 10 and len(second_rolls) > 0:
                    score += 20
                    for k in range(len(second_rolls)):
                        if second_rolls[k] != 'X':
                            score += int(second_rolls[k])
                        else:
                            score += 10 + sum(first_rolls[j+1:])
                            return score
            for i in range(2):
                score += max(second_rolls)
    return score