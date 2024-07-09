def sort_third(l: list):
    l3 = [i for i in l if i % 3 == 0]
    l3.sort()
    res = []
    idx = 0
    for i in range(len(l)):
        if i % 3 == 0:
            res.append(l3[idx])
            idx += 1
        else:
            res.append(i)
    return res