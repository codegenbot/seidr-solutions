input_numbers = list(map(int, input("Enter space-separated numbers: ").split()))
def sum_product(numbers):
    return sum(numbers), numbers[0] * numbers[1]
result = sum_product(input_numbers)
print(*result)