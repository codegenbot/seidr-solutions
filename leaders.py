Here is the solution:

def leaders(input):
    return [max(input[i:]) for i in range(len(input))][::-1]