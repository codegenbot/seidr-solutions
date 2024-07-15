try:
    numbers = list(map(float, input("Enter space-separated numbers: ").strip().split()))
    sum_numbers = sum(numbers)
    print(f"Sum of the numbers is: {sum_numbers}")
except ValueError:
    print("Invalid input. Please enter space-separated numbers.")