def double_the_difference(lst: list[int]) -> int:
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0 and isinstance(x, int)) * 2 if lst else 0