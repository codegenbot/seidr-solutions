def leaders(input):
    leaders = [max(input)]
    for i in range(len(input) - 2, -1, -1):
        if input[i] >= max(input[i+1:]):
            leaders.append(input[i])
    return list(reversed(leaders))