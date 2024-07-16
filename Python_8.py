input_numbers = list(map(int, input().split()))
def sum_product(numbers):
    return sum(numbers), input_numbers[0] * input_numbers[1]
result = sum_product(input_numbers)
print(*result)