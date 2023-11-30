def double_the_difference(lst: list[int]) -> int:
    return sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)