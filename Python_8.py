```Python
numbers = [int(num) for num in input().split()]
if not all(isinstance(i, int) for i in numbers):
    print("List elements must be integers")
elif len(set(numbers)) != len(numbers):
    print("All elements must be unique.")
else:
    try:
        a = int(input("Enter the first number: "))
        b = int(input("Enter the second number: "))
        result = [a + b, a * b]
        print(f"Sum: {result[0]}, Product: {result[1]}")
    except ValueError as e:
        print(e)