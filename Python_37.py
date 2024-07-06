def sort_even(l: list):
    l.sort()
    even_idx = [i for i, x in enumerate(l) if x % 2 == 0]
    sorted_evens = sorted((x, i) for i, x in enumerate([x for x in l if x % 2 == 0]))
    
    result = []
    even_index = 0
    for i, x in enumerate(l):
        if i in even_idx:
            result.append(sorted_evens[even_index][1])
            even_index = (even_index + 1) % len(sorted_evens)
        else:
            result.append(x)
            
    return tuple(result)