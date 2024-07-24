def sum_of_odd_numbers(lst):
    odd_sum = 0
    for i in range(1, len(lst), 2):
        if lst[i] % 2 != 0:
            odd_sum += lst[i]
    return odd_sum