Here is the Python solution:

def leaders(input):
    return [x for i,x in enumerate(reversed(input)) if x >= all(map(lambda y: int(y), input[i+1:]))] + list(reversed(input))[::-1][::-1]
print(leaders(list(map(int, input().split()))))