def add(numbers):
    return sum(numbers)


user_input = input("Enter numbers separated by spaces: ")
while user_input != "":
    numbers = user_input.split()
    result = add(numbers)
    print(f"The sum is {result}")
    user_input = input("Enter more numbers (press Enter to quit): ")