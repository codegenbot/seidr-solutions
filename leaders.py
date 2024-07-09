```
def leaders(a):
    leaders = [a[-1]]
    max_right = a[-1]
    for i in range(len(a) - 2, -1, -1):
        if a[i] >= max_right:
            leaders.append(a[i])
            max_right = a[i]
    return list(reversed(leaders))