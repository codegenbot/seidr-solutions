def find_max_sum(lst):
    total_sum = 0
    for num in lst:
        if num % 2 == 0:
            total_sum += num**2
        else:
            total_sum += num
    return total_sum