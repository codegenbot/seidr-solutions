def find_max_value(lst):
    max_val = float('-inf')
    for num in lst:
        if abs(num) > max_val:
            max_val = abs(num)
    return max_val