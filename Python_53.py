def add(numbers):
    return sum(map(int, numbers))

user_input = input("Enter numbers separated by commas: ")
numbers = user_input.split(",")
result = add(numbers)
print(f"The sum is {result}")