```python
def double_the_difference(lst):
    total = 0
    even_sum = sum(i for i in lst if isinstance(i, int) and i % 2 == 0)
    total += (sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0) + 2*even_sum)

result = double_the_difference([1, 2, -3, 4, -5])