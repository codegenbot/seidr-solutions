try:
    user_input = input("Enter a list of numbers separated by space: ")
    numbers = list(map(float, user_input.split()))
except ValueError:
    print("Invalid input. Please enter numbers separated by space.")