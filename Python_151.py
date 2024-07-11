```python
def double_the_difference(lst):
    positive_odd_squares = sum(i**2 for i in lst if isinstance(i, int) and i > 0 and i % 2 != 0)
    negative_odd_count = sum(1 for i in lst if isinstance(i, int) and i < 0 and i % 2 != 0)
    return positive_odd_squares - negative_odd_count

result = double_the_difference([1, 2, -3, 4, -5])