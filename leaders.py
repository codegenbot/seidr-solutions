```
def leaders(arr):
    max_r = arr[-1]
    leaders = [max_r]
    for x in reversed(arr[:-1]):
        if x >= max_r:
            max_r = x
            leaders.append(x)
    return list(reversed(leaders))