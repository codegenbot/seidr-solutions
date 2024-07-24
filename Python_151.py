def double_the_difference(a, d):
    return sum(i**2 for i in range(a, a + d) if isinstance(i, int) and i > 0)