Here is the solution in Python:

def leaders(input):
    return [i for i in reversed(input) if all(j <= i for j in input[input.index(i)+1:])]

input = list(map(int, input().split()))
print(' '.join(map(str, leaders(input))))