def double_the_difference(lst):
    # Define lst variable
    lst = [1, 2, 3, 4, 5]

    # Calculate the sum of squares
    return sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)