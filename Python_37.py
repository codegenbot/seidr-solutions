def sort_even(l: list):
    even_dict = {i: x for i, x in enumerate([x for x in l if x % 2 == 0])}
    even_idx = [k for k in even_dict.keys()]
    
    result = []
    even_index = 0
    for i, x in enumerate(l):
        if i in even_idx:
            result.append(even_dict[i])
            even_index += 1
        else:
            result.append(x)
            
    return result