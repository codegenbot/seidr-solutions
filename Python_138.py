def is_equal_to_sum_even(n):
    for i in range(2, n + 1, 2):
        if n != sum([x for x in range(i, i + 4, 2)]):
            return False
    return True