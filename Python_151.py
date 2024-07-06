def double_the_difference(odd_sum):
    return sum(i**2 for i in odd_sum if isinstance(i, int) and i > 0)