def double_the_difference(lst):
    try:
        odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
        return odd_sum * 2
    except TypeError:
        return "Error: Please provide a list of integers."