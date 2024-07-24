```
def sum_of_odd_squares(lst):
    total_sum = 0
    for num in lst:
        if num % 2 != 0:
            total_sum += num**2
    return total_sum

print(sum_of_odd_squares([1, 2, 3, 4, 5]))