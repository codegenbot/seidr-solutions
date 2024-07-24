def sort_third(l: list):
    return [
        i if i % 3 != 0 else sorted([j for j in l[:i] + l[i + 1 :] if j % 3 == 0])[0]
        for i in range(len(l))
    ]