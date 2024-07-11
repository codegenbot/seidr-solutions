```python
```
def sum_squares(lst):
    total = 0
    for i, num in enumerate(lst):
        if (i + 1) % 3 == 0 and (i + 1) % 4 != 0:
            total += num ** 2
        elif (i + 1) % 4 == 0 and (i + 1) % 3 != 0:
            total += num ** 3
    return total

numbers = input("Enter numbers separated by a comma: ").split(",")
lst = [float(num) for num in numbers]
print(sum_squares(lst))
```