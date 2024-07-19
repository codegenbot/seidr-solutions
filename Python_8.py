while True:
    try:
        numbers = list(map(int, input("Enter numbers separated by space: ").split()))
        sum_of_numbers = sum(numbers)
        print(f"Sum of the numbers is: {sum_of_numbers}")
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by space.")