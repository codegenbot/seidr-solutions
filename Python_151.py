```
def check(input_list):
    difference = abs(max(input_list) - min(input_list))
    sum_of_squares = sum(i**2 for i in input_list if isinstance(i, int) and i > 0)
    return (difference * 2) + sum_of_squares