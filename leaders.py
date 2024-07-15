```
def leaders(input):
    return [input[i] for i in range(len(input)-1, -1, -1) if input[i] >= max(input[i+1:])]