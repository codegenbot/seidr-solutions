def sum_product(numbers):
    if len(numbers) > 0:
        total_sum = sum(numbers)
        total_product = 1
        for num in numbers:
            total_product *= num
        return total_sum, total_product
    else:
        return 0, 0