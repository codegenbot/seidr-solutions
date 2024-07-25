user_input = input("Enter numbers separated by space: ")
numbers = list(map(int, user_input.split()))
result = sum_product(numbers)
print(result)