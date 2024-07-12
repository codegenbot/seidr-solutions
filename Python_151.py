```python
def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    return (sum(map(int, lst)) - odd_sum) * 2

check(double_the_difference([input("Enter elements of the list: ").split(",")]))