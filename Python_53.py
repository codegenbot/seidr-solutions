def add(x: int, y: int) -> int:
    return x + y

input("Enter two numbers: ")
x, y = map(int, input().split())

result = add(x, y)

print(result)