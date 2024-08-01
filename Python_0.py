threshold = int(input("Enter the threshold value: "))
numbers = list(map(int, input("Enter the numbers separated by spaces: ").split()))

result = check_numbers(numbers, threshold)
print(result)