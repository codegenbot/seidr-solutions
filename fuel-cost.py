numbers = [int(input()) for _ in range(int(input("Enter number of elements: ")))]
result = sum((num // 3 - 2) for num in numbers)
print(result)