```
def double_the_difference(lst):
    even_squares = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0)
    odd_numbers = sum(1 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return (even_squares - odd_numbers) * 2