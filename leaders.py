def leaders(arr):
    return [
        num
        for num in reversed(arr)
        if all(num >= x for x in reversed(arr)[reversed(arr).index(num) + 1 :])
    ]