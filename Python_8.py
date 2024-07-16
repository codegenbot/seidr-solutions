input_numbers = list(map(int, input().split()))
def sum_product(numbers):
    return sum(numbers), numbers[0] * numbers[1] * numbers[2]
result = sum_product(input_numbers)
print(*result)