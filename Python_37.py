```
def sort_even(l: list):
    even_idx = [i for i, x in enumerate(l) if x % 2 == 0]
    sorted_evens = sorted([abs(x) for x in l if x % 2 == 0])
    
    result = []
    even_index = 0
    for i, x in enumerate(l):
        if i in even_idx:
            result.append(-1 * sorted_evens[even_index % len(sorted_evens)] if x < 0 else sorted_evens[even_index % len(sorted_evens)])
            even_index = (even_index + 1) % len(sorted_evens)
        else:
            result.append(x)
            
    return [x for x in result]