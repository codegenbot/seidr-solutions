```
def sum_squares(lst):
    total_sum = sum(num ** len(str(i)) for i, num in enumerate(lst))
    return total_sum


print(sum_squares([1, 2, 3, 4, 5, 6]))