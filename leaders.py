def leaders(input):
    leaders = [input[-1]]
    for num in input[::-1]:
        if num < leaders[0]:
            leaders.pop(0)
    return leaders