def sum_product(numbers):
    return sum(numbers), 1 if 0 in numbers else eval("*".join(map(str, numbers))) if numbers else 1