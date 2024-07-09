def bowling_score(bowls):
    score = 0
    rolls = bowls.replace("-", "0")
    
    for i in range(len(rolls)):
        if rolls[i] == 'X':
            score += 10
            if i + 2 < len(rolls):
                score += sum(map(int, rolls[i+1:i+3].replace('/', '0')))
        elif rolls[i] == '/':
            score += 10 - int(rolls[i-1])
            if i + 1 < len(rolls):
                score += int(rolls[i+1])
        else:
            score += int(rolls[i])

    return score

bowls = input()
print(bowling_score(bowls))