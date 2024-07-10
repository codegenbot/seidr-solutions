Here is the Python solution for the problem:

def leaders(input):
    return [i for i in reversed(input) if all(j <= i for j in input[input.index(i)+1:])]