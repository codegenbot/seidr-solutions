Here is the solution:

def leaders(input):
    result = [max(input[i:]) for i in range(len(input))]
    return result