def leaders(input):
    leaders = [input[-1]]
    for num in reversed(input[:-1]):
        if num >= leaders[0]:
            leaders.insert(0, num)
    return leaders