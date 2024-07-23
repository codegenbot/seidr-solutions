def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    sorted_evens = sorted(evens)
    odd_index = 0
    result = []
    for x in l:
        if x % 2 == 0:
            result.append(sorted_evens[odd_index])
            odd_index += 1
        else:
            result.append(x)
    return tuple(result)