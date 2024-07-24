```
numbers = input("Enter a list of numbers separated by space: ")
while True:
    try:
        numbers = [int(num) for num in numbers.split()]
        break
    except ValueError as e:
        print(f"Invalid input. Please enter a list of integers separated by spaces: {e}")
print(f"Sum: {sum_product(numbers)[0]}, Product: {sum_product(numbers)[1]}")