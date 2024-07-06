def add(x: int, y: int):
    return x + y

user_input = input("Enter two numbers to add: ")
numbers = user_input.split()
result = add(int(numbers[0]), int(numbers[1]))
print(f"The result is {result}")