def sum_squares(lst):
    if not isinstance(lst, list) or len(lst) == 0:
        raise ValueError("Input must be a non-empty list")
    
    total_sum = 0
    for num in lst:
        if not isinstance(num, (int, float)):
            raise ValueError(f"Invalid input '{num}' found. Input must contain only numbers.")
        if num <= 0:
            raise ValueError(f"All numbers should be positive. Found a negative number: {num}")
        total_sum += num ** 2
    return total_sum