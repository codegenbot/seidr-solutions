def double_the_difference(lst):
    positive_even_squares = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0)
    all_squares = sum(i**2 for i in lst if isinstance(i, int))
    return (all_squares - positive_even_squares) * 2