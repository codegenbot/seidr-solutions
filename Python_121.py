def sum_of_odd_numbers(lst):
    result = 0
    for i in lst:
        if i % 2 != 0:
            result += i
    return result