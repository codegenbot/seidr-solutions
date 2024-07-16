def add(x: int, y: int) -> int:
    return x + y

input_values = input().split()
num1, num2 = map(int, input_values)

result = add(num1, num2)
print(result)