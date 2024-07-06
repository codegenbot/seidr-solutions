def sum_squares(lst):
    if not isinstance(lst, list) or len(lst) == 0:
        return "Error: Input must be a non-empty list of integers."
    
    return sum(i**2 for i in lst)