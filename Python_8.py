try:
    print("Enter the numbers separated by space:")
    numbers = list(map(int, input().split()))

    n = len(numbers)

    res = sum(num for num in numbers if num % 2 == 0)
    print(res)

except (ValueError, TypeError):
    print("Input error. Please enter valid input.")