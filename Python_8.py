try:
    numbers = [int(num) for num in input('Enter numbers separated by spaces: ').split()]
    if all(isinstance(num, int) for num in numbers):
        print(*sum_product(numbers))
    else:
        raise ValueError
except ValueError:
    print("Please enter valid integers separated by spaces, e.g., '1 2 3'.")