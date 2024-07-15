def leaders(input):
    leader = [input[-1]]
    for i in range(len(input) - 2, -1, -1):
        if input[i] >= input[-1]:
            leader.insert(0, input[i])
            input[-1] = input[i]
    return leader