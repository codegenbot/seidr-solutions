def find_sum_of_numbers(lst):
    sum = 0
    for i in lst:
        if i % 2 == 1:
            sum += i
    return sum