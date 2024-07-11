```python
def double_the_difference(lst):
    sum_of_squares = 0
    for num in lst:
        if isinstance(num, int) and num >= 0 and num % 2 != 0:
            sum_of_squares += num ** 2
    difference = sum_of_squares - (sum(i**2 for i in lst if isinstance(i, int)) / 2)
    return 2 * difference