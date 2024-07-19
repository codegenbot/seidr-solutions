try:
    numbers = list(map(lambda x: int(x), input("Enter numbers separated by space: ").split()))
    sum_of_numbers = sum(numbers)
    print(f"Sum of the numbers is: {sum_of_numbers}")
except ValueError:
    print("Invalid input. Please enter valid numbers separated by space.")