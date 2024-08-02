def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int):
            total_sum += num**2
        elif isinstance(num, str):
            if num.lower() == "sum":
                return total_sum
            elif num.lower() == "reset":
                return 0