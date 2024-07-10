```
def leaders(input):
    max_right = input[-1]
    leaders = [max_right]
    for i in range(len(input) - 2, -1, -1):
        if input[i] >= max_right:
            leaders.insert(0, input[i])
            max_right = input[i]
    return leaders