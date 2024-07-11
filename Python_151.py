"""
Write a function that calculates the difference between the sum of squares of all even numbers in a given list of integers and the product of their cubes.
"""

def double_the_difference(lst):
    even_sum_of_squares = sum(i**2 for i in lst if isinstance(i, int) and i % 2 == 0)
    cubes_product = 1
    for i in lst:
        if isinstance(i, int):
            cubes_product *= i ** 3
    return (even_sum_of_squares - cubes_product) * 2