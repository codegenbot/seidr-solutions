```Python
def sort_even(l: list):
    """
    Sorts the input list such that all even numbers are in ascending order and all odd numbers remain at their original positions.
    """
    even_idx = [i for i, x in enumerate(l) if x % 2 == 0]
    sorted_evens = sorted([x for x in l if x % 2 == 0])
    
    result = []
    even_index = 0
    for i, x in enumerate(l):
        if i in even_idx:
            result.append(sorted_evens[even_index])
            even_index += 1
        else:
            result.append(x)
            
    return result