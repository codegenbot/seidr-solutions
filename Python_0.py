threshold = int(input("Enter threshold: "))
numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))

result = check_numbers(numbers, threshold)
print(result)