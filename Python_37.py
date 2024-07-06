def sort_even(l: list):
    even_idx = [i for i, x in enumerate(l) if x % 2 == 0]
    sorted_evens = sorted([x for x in l if x % 2 == 0])
    
    result = []
    even_index = 0
    for i, x in enumerate(l):
        if i in even_idx:
            result.append(sorted_evens[even_index % len(sorted_evens)])
            even_index = (even_index + 1) % len(sorted_evens)
        else:
            result.append(x)
            
    return [x if not even_idx else x for x in result] if sorted_evens else l