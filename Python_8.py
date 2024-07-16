input_numbers = list(map(int, input("Enter three numbers separated by space: ").strip().split()))
def sum_product(input_numbers):
    return sum(input_numbers), input_numbers[0] * input_numbers[1] * input_numbers[2]
result = sum_product(input_numbers)
print(*result)