```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if type(num) == int:
            total_sum += num ** 2
        elif type(num) == str:
            total_sum += ord(num) ** 2
    return total_sum