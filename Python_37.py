```
def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    result = []
    i = j = 0
    while i < len(l):
        if j < len(evens):
            result.append(evens[j])
            j += 1
        else:
            result.append(l[i])
            i += 1
    return result