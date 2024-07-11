def check(input_list):
    if not isinstance(input_list, list) or not all(
        isinstance(i, int) for i in input_list
    ):
        raise TypeError("Input should be a list of integers")
    lst = [i for i in input_list if i > 0]
    difference = abs(max(lst) - min(input_list))
    return (difference * 2) + sum(i**2 for i in lst)