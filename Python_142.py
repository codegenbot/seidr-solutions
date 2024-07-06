```
def sum_squares(lst):
    if not isinstance(lst, list) or len(lst) == 0:
        raise ValueError("Input must be a non-empty list")
    
    total_sum = 0
    for num in lst:
        total_sum += num ** 2
    return total_sum