def double_the_difference(lst: list[int]) -> int:
    return 2 * sum((x - lst[i+1])**2 for i, x in enumerate(lst[:-1]) if x > 0 and isinstance(x, int) and x % 2 != 0)