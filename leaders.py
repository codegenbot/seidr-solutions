```
def leaders(input):
    max_right = input[-1]
    leaders = [max_right]

    for i in range(len(input) - 2, -1, -1):
        if input[i] >= max_right:
            max_right = input[i]
            leaders.insert(0, max_right)

    return leaders

input = list(map(int, input().split()))
print(' '.join(map(str, leaders(input))))