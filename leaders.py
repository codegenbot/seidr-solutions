def leaders(a):
    return [
        a[i]
        for i in range(len(a) - 1, -1, -1)
        if a[i] >= all(x for x in a[i + 1 :]) or i == len(a) - 1
    ]