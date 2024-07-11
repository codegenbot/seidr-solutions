def check(input_list):
    if not all(isinstance(i, int) for i in input_list):
        raise ValueError("All elements of the list must be integers.")
    difference = abs(max(input_list) - min(input_list))
    return (difference * 2) + sum(i**2 for i in input_list if i > 0)