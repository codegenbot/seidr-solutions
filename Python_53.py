def add(x: int, y: int) -> int:
    return x + y

print("Enter two numbers separated by space:", end=' ')
x, y = map(int, input().split())

result = add(x, y)

print("The sum is:", result)