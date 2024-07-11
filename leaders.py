```
def leaders(input):
    leaders = [input[i] for i in range(len(input)-1, -1, -1) if all(x <= input[i] for x in input[i+1:])]
    return ' '.join(map(str, leaders))