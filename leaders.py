def leaders(integers):
    leaders = [integers[-1]]
    for i in range(len(integers) - 2, -1, -1):
        if integers[i] >= integers[i + 1]:
            leaders.append(integers[i])
    return list(reversed(leaders))