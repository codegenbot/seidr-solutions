```
numbers = input("Enter a list of integers separated by space: ").split()
try:
    numbers = [int(num) for num in numbers]
    result = sum_product(numbers)
    print(f"The sum and product of the given numbers is {result}.")
except ValueError:
    print("Error: Input must be a list of integers")