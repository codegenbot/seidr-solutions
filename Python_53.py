def add(x: int, y: int):
    return x + y

print("Enter first integer:", end=" ")
x = int(input())
print("Enter second integer:", end=" ")
y = int(input())

result = add(x, y)
print("Sum of the two integers:", result)