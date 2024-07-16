def sum_product(numbers):
    return sum(numbers), numbers[0] * numbers[1]


try:
    input_numbers = list(map(int, input().split()))
    if len(input_numbers) != 2:
        raise ValueError("Please provide exactly 2 numbers separated by spaces.")
    result = sum_product(input_numbers)
    print(*result)
except ValueError as e:
    print(e)
except Exception as e:
    print("An error occurred. Please provide valid input.")