def leaders(input):
    leaders = []
    for i in range(len(input)):
        if i == len(input) - 1 or input[i] >= max(input[i+1:]):
            leaders.append(input[i])
    return leaders