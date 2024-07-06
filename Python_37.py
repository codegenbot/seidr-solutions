def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    sorted_evens = sorted(evens)
    
    result = []
    even_index = 0
    for x in l:
        if x % 2 == 0:
            result.append(sorted_evens[even_index % len(sorted_evens)])
            even_index += 1
        else:
            result.append(x)
            
    return tuple(result)