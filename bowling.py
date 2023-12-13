def bowling(string):
    score = 0
    frames = string.split('-')
    for frame in frames:
        if frame == 'X':
            score += 10
        else:
            bowls = list(frame)
            for i in range(len(bowls)):
                if bowls[i] == '/':
                    score += 10 - int(bowls[i-1])
                else:
                    score += int(bowls[i])
    return score

input_string = input()
print(bowling(input_string))