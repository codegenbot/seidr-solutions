```
numbers = input("Enter a list of integers (space-separated): ")
try:
    numbers = [int(num) for num in numbers.split()]
    sum_product = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    print(f"Sum: {sum_product}, Product: {product}")
except ValueError:
    print("Error: Input must be a list of integers")