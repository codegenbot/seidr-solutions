numbers = list(map(int, input().strip().split()))
def sum_product(numbers):
    sum_value = sum(numbers)
    product_value = 1
    for num in numbers:
        product_value *= num
    return sum_value, product_value

result = sum_product(numbers)
print(*result)