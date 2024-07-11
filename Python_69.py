def search(lst):
    count = {}
    for i in lst:
        if i in count:
            count[i] += 1
        else:
            count[i] = 1

    max_val = max(count.values())
    return [i for i, j in count.items() if j == max_val][0]