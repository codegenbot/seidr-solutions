```
def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    result = []
    i = j = 0
    while j < len(l):
        if i < len(evens):
            result.append(evens[i])
        else:
            result.append(j)
        j += 1
        if i < len(evens) and j < len(l) and l[j] % 2 == 0:
            i += 1
    return result