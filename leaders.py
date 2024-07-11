```
def leaders(input):
    leaders = [input[i] for i in range(len(input) - 1, -1, -1) if all(x <= input[i] for x in input[i+1:])]
    return list(map(str, reversed(leaders))) 

input = list(map(int, input().split()))
print(' '.join(leaders(input)))