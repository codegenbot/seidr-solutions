```Python
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if num > 0 and (num ** 0.5 == int(num ** 0.5)):
            total_sum += num ** 2
        else:
            total_sum += num
    return total_sum

# example usage:
print(sum_squares([1, 4, -3, 9, -10]))