def leaders(input):
    leader = [input[-1]]
    for i in range(len(input) - 1, -1, -1):
        if input[i] >= max(input[i+1:]):
            leader.insert(0, input[i])
    return leader