def tri(n):
    lst = []
    for i in range(n+1):
        if i == 1:
            lst.append(3)
        elif i % 2 == 0:
            lst.append(1 + i // 2)
        else:
            lst.append(lst[i - 1] + lst[i - 2] + lst[i + 1])
    return lst