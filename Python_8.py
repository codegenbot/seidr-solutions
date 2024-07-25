def sum_product(numbers):
    return sum(numbers), (lambda x: x if len(numbers) > 0 else 0)(lambda: number for i, number in enumerate(numbers) if i==0 else number)

try:
    numbers = [int(num) for num in input('Enter numbers separated by spaces: ').split()]
    if all(isinstance(num, int) for num in numbers):
        print(*sum_product(numbers))
    else:
        raise ValueError
except ValueError:
    print("Please enter valid integers separated by spaces, e.g., '1 2 3'.")