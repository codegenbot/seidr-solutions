def double_the_difference(lst):
    odd_sum = 0
    even_sum = 0
    for x in lst:
        if x > 0 and x % 2 != 0:
            odd_sum += x
        elif x > 0 and x % 2 == 0:
            even_sum += x
    return 2 * (odd_sum - even_sum**2)