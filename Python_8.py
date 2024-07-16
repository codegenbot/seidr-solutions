def sum_product(numbers):
    total_sum = sum(numbers)
    product = numbers[0] * numbers[1]
    return total_sum, product

input_numbers = list(map(int, input().split()))
result = sum_product(input_numbers)
print(*result)