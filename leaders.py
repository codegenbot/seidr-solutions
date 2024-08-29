def leaders(a):
    leaders_list = [
        a[i] for i in range(len(a) - 1, -1, -1) if all(x <= a[i] for x in a[i + 1 :])
    ]
    return leaders_list