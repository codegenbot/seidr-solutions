def leaders(input):
    leaders = [input[-1]]
    for num in input:
        if num >= leaders[-1]:
            leaders.insert(0, num)
    return leaders