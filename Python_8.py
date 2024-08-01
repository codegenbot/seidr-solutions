def sum_product(numbers):
    numbers = list(map(int, input().split()))
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product