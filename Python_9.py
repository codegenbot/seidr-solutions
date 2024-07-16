try:
    input_numbers = list(map(int, input("Enter space-separated numbers, e.g., 1 2 3: ").strip().split()))
    result = sum(input_numbers)  # Calculate the sum of input numbers
    print("Sum of the numbers:", result)
except ValueError:
    print("Invalid input. Please enter numbers separated by space.")