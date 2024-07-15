try:
    n = int(input("Enter the total number of elements: "))
    numbers = [int(x) for x in input(f"Enter {n-1} numbers separated by space: ").split()]
    if len(numbers) != n - 1:
        raise ValueError
    res = sum(num for num in numbers if num % 2 == 0)
    print(res)
except (ValueError, TypeError):
    print("Input error. Please enter valid input.")