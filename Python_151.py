def check(input_list):
    difference = abs(max(input_list) - min(input_list))
    return (difference * 2) + sum(
        i**2 for i in input_list if isinstance(i, int) and i > 0
    )