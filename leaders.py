def leaders(a):
    leaders = [
        a[i] for i in range(len(a) - 1, -1, -1) if all(a[i] >= x for x in a[i + 1 :])
    ]
    return leaders