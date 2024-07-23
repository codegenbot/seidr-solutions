def add(x: int, y: int) -> int:
    return x + y


num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second numbers separated by space: "))
numbers = list(map(int, num2.split()))
result = sum([add(num1, i) for i in numbers])
print(result)