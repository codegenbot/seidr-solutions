```
def leaders(input):
    return [max(input[i:]) for i in range(len(input)-1, -1, -1)]

input = list(map(int, input().split()))
print(' '.join(map(str, leaders(input))))