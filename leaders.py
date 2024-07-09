def leaders(arr):
    leaders = [arr[i] for i in range(len(arr) - 1, -1, -1)]
    return [
        x for x in reversed(leaders) if all(y <= x for y in leaders[leaders.index(x) :])
    ]