def leaders(input):
    return [i for i in input if all(j <= i for j in input[input.index(i)+1:])]