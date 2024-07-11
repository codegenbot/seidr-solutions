def leaders(input):
    output = [i for i in reversed(input) if i >= max(input[input.index(i)+1:])]
    return ' '.join(map(str, output))