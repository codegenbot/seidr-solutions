def add(numbers):
    return sum(numbers)


user_input = input("Enter numbers separated by spaces: ")
numbers = user_input.split(" ")
result = add(numbers)
print(f"The sum is {result}")