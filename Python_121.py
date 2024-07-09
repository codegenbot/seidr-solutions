def sum_of_odd_numbers(lst):
    total = 0
    for i in lst:
        if i % 2 != 0:
            total += i
    return total