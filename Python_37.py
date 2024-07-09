```
def sort_even(l: list):
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    sorted_evens = sorted(evens)
    result = []
    even_idx = 0
    for i, x in enumerate(l):
        if i % 2 == 0:
            result.append(sorted_evens[even_idx])
            even_idx += 1
        else:
            result.append(x)
    return result