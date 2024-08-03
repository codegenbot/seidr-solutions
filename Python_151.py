```python
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)

check = input("Enter a list of numbers separated by space: ")
lst = [int(x) for x in check.split()]
odd_sum = sum(i for i in lst if i % 2 != 0)
print(double_the_difference(lst) * 2 == odd_sum)