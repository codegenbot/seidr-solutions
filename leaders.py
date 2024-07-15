def leaders(input):
    max_r = input[-1]
    leaders = [max_r]
    for i in range(len(input) - 2, -1, -1):
        if input[i] >= max_r:
            leaders.append(input[i])
            max_r = input[i]
    return list(reversed(leaders))