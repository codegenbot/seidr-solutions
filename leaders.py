def leaders(a):
    original = a.copy()
    leaders = [a[-1]]
    for i in range(len(original) - 2, -1, -1):
        if original[i] >= original[-1]:
            leaders.append(original[i])
    return reversed(leaders)