print("Enter a list of numbers separated by space: ")
numbers = [int(num) for num in input().split()]
if not all(isinstance(i, int) for i in numbers):
    print("List elements must be integers")
elif len(set(numbers)) != len(numbers):
    print("All elements must be unique.")
else:
    try:
        result = sum_product(numbers)
        print(f"Sum: {result[0]}, Product: {result[1]}")
    except ValueError as e:
        print(e)