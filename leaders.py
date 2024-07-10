def leaders(input):
    leaders = []
    max_seen = input[-1]
    for x in reversed(input):
        if x >= max_seen:
            leaders.append(x)
            max_seen = x
    return list(reversed(leaders))