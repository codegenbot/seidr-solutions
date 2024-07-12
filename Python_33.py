def flatten_list(list_of_lists):
    if isinstance(list_of_lists[0], int):  
        return list_of_lists
    return [item for sublist in list_of_lists for item in sublist]

def sort_third(l: list):
    if len(l) % 3 != 0:
        l += [0] * (3 - len(l) % 3)
        
    return [flatten_list(sorted([l[i], l[i+1], l[i+2]], reverse=True)) for i in range(0, len(l), 3)]