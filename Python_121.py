def find_max_min(lst):
    if not lst:
        return "List is empty"
    max_val = min_val = lst[0]
    for num in lst:
        if num > max_val:
            max_val = num
        elif num < min_val:
            min_val = num
    return f"Max: {max_val}, Min: {min_val}"