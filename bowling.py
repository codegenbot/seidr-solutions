def calculate_score(string):
    score = 0
    frame = 1
    i = 0
    while i < len(string) and frame <= 10:
        if string[i] == 'X':
            score += 10
            if i + 2 < len(string):
                score += get_bowl_value(string[i + 1])
                score += get_bowl_value(string[i + 2])
            frame += 1
        elif string[i] == '/':
            score += 10 - get_bowl_value(string[i - 1])
            if i + 1 < len(string):
                score += get_bowl_value(string[i + 1])
            frame += 1
        else:
            score += get_bowl_value(string[i])
        i += 1
    
    return score

def get_bowl_value(char):
    if char == 'X':
        return 10
    elif char == '-':
        return 0
    else:
        return int(char)

string = input()
print(calculate_score(string))