def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, (int, float)):
            if num >= 0:
                total_sum += num**2
            else:
                total_sum -= num**2
        elif isinstance(num, str):
            if num.lower() == "square":
                total_sum = sum([i**2 for i in lst])
            else:
                total_sum = sum(lst)
        else:
            raise ValueError(
                "Invalid input. Only integers, floats and 'square' are allowed."
            )
    return total_sum