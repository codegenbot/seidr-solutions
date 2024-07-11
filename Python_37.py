def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    sorted_evens = sorted(evens)
    result = []
    j = 0
    for x in l:
        if x % 2 == 0:
            result.append(sorted_evens[j])
            j += 1
        else:
            result.append(x)
    return tuple(result)