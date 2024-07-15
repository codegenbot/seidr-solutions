try:
    numbers = [int(input()) for _ in range(int(input("Enter the number of elements: "))]
    result = min(numbers, key=lambda x: abs(int(x)))
    print(result)
except ValueError:
    print("Invalid input. Please enter valid numbers.")
except EOFError:
    print("No input provided. Please enter valid numbers.")