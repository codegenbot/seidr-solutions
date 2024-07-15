```
def leaders(input):
    leaders = []
    max_right = input[-1]
    for i in range(len(input) - 1, -1, -1):
        if input[i] >= max_right:
            leaders.append(input[i])
            max_right = input[i]
    return leaders