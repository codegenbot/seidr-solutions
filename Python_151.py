double_even_squares = lambda lst: sum(
    i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0
)