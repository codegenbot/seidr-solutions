def leaders(input):
    leaders = []
    max_right = input.pop()
    for i in reversed(input):
        if i >= max_right:
            leaders.append(i)
        max_right = i
    return list(reversed(leaders))