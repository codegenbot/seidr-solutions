numbers = input("Enter numbers separated by space: ").split()
numbers = [int(num) for num in numbers]
print(sum_squares(numbers))