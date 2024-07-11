def leaders(input):
    output = [i for i in reversed(input) if all(j <= i for j in input[input.index(i)+1:])]
    return ' '.join(map(str, output))