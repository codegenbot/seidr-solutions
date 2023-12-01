def double_the_difference(numbers):
    return sum(x**2 for x in numbers if x > 0 and isinstance(x, int) and x % 2 != 0) if numbers else 0