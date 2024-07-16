def sum_product(numbers):
    return sum(numbers), numbers[0] * numbers[1]

input_numbers = list(map(int, input("Enter space-separated list of numbers: ").split()))
result = sum_product(input_numbers)
print(*result)