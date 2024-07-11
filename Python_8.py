numbers = list(map(int, input().strip().split()))

def sum_product(numbers):
    sum_num = sum(numbers)
    product_num = 1
    for num in numbers:
        product_num *= num
    return sum_num, product_num

result = sum_product(numbers)
print(*result)