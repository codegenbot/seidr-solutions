def sum_squares(lst):
    if not isinstance(lst, list) or len(lst) == 0:
        raise ValueError("Input must be a non-empty list")
    
    total_sum = 0
    is_negative_found = False
    
    for num in lst:
        if not isinstance(num, (int, float)):
            raise ValueError(f"Invalid input '{num}' found. Input must contain only numbers.")
        if num <= 0 and not is_negative_found:
            is_negative_found = True
            continue
        total_sum += num ** 2
    
    return total_sum if not is_negative_found else None