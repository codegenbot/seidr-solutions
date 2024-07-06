def sum_squares(lst):
    if not isinstance(lst, list) or len(lst) == 0:
        raise ValueError("Input must be a non-empty list")
    
    total_sum = 0
    for num in lst:
        if not isinstance(num, (int, float)):
            raise ValueError("All elements in the list must be integers or floats")
        total_sum += num ** 2
    return total_sum