def add(x: int, y: int) -> int:
    return x + y

print("Enter two numbers separated by space:")
num1, num2 = map(int, input().split())

result = add(num1, num2)
print(result)