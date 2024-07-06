
def add(x: int, y: int):
    return x + y

print("Enter two integers separated by a space:")
num1, num2 = map(int, input().split())
result = add(num1, num2)
print(f"The sum of {num1} and {num2} is: {result}")