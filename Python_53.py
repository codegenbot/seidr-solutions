
def add(x: int, y: int):
    return x + y

user_input = input("Enter two numbers to add: ")
num1, num2 = map(int, user_input.split())
result = add(num1, num2)
print("The sum of", num1, "and", num2, "is", result)