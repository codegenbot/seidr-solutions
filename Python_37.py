def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    odd = sorted([x for x in l if x % 2 != 0])

    result = []
    min_len = min(len(even), len(odd))
    for i in range(min_len):
        result.append((even[i], odd[i]))

    return tuple(result)