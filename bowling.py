def bowling_score(input_string):
    score = 0
    i = 0
    while i < len(input_string.split()):
        if input_string.split()[i] == 'X':
            score += 10
            i += 1
            if i < len(input_string.split()) and input_string.split()[i:i+2].replace('-', '/') in ['10/', '11/']:
                if input_string.split()[i:i+2].replace('-', '/') == '10/':
                    score += 20
                else:
                    score += 30
                i += 1
        elif '/' in input_string.split()[i]:
            parts = input_string.split()[i].split('/')
            score += int(parts[0]) + int(parts[1])
            i += 2
        else:
            score += sum(int(x) for x in input_string.split()[i])
            i += 1
    print(score)