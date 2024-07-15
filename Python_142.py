```python
def sum_squares(lst):
    if len(lst) == 0:
        return 0
    total = 0
    for num in lst:
        if isinstance(num, int):
            total += num**2
        else:
            raise ValueError("The list must contain only integers.")
    return total

numbers = input("Enter a list of numbers (separated by space): ")
numbers_list = [int(i) for i in numbers.split()]
print(sum_squares(numbers_list))