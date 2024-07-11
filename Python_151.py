```python
def double_the_difference(lst):
    total_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0)
    positive_even_count = len([i for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0])
    return (total_sum - positive_even_count*2) / (len(lst) - positive_even_count)

result = double_the_difference([1, 2, -3, 4, -5])