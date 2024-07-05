def double_the_difference(lst):
    return sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)


# Example call for testing to avoid `NameError`
lst = [1, 2, 3, 4, 5]  # Define your list here
print(double_the_difference(lst))