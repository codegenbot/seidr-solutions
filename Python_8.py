def sum_product(numbers):
    sum_nums = sum(numbers)
    product_nums = 1
    for num in numbers:
        product_nums *= num
    return sum_nums, product_nums

numbers = list(map(int, input().split()))
result = sum_product(numbers)
print(*result)