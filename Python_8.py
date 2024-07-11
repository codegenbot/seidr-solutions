numbers = list(map(int, input().strip().split()))
def sum_product(numbers):
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product
result = sum_product(numbers)
print(*result)