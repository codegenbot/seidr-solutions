"""
Given a list of integers and strings, find the difference between the sum of squares of all positive integers in the list and the product of distinct numbers in the list.

Function should take one argument: a list of integers and strings.
The function should return the difference between the sum of squares of all positive integers in the list and the product of distinct numbers in the list. If there are no positive integers or no distinct numbers, return 0.

For example:
- double_the_difference([1, -2, 'a', 'b', 3]) should return 14
"""
def double_the_difference(lst):
    squared_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    distinct_product = 1
    seen = set()
    for i in lst:
        if isinstance(i, int) and i not in seen:
            seen.add(i)
            distinct_product *= i
    return squared_sum - distinct_product