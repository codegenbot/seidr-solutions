def add_even_numbers(lst):
    return sum(i for i in lst if isinstance(i, int) and i % 2 == 0)