def double_the_difference(lst):
    if not isinstance(lst, list) :
        raise ValueError("Input should be a list of integers")
    for i in lst:
        if not isinstance(i, int):
            raise ValueError("List must only contain integers")
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)