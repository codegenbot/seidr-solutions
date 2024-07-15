```
def leaders(input):
    leader = []
    max_left = input[0]
    for i in range(len(input)):
        if input[i] >= max_left:
            leader.append(input[i])
            max_left = input[i]
    return list(reversed(leader))