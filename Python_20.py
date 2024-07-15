try:
    num_elements = int(input("Enter the number of elements: "))
    numbers = [int(input()) for _ in range(num_elements)]
    result = min(numbers, key=lambda x: abs(int(x)))
    print(result)
except ValueError:
    print("Invalid input. Please enter valid numbers.")
except EOFError:
    print("No input provided. Please enter valid numbers.")