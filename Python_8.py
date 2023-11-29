def sum_product(numbers: list[int]) -> tuple[int, int]:
    if not numbers:
        return (0, 1)
    else:
        sum = 0
        product = 1
        for num in numbers:
            sum += num
            product *= num
        return (sum, product)