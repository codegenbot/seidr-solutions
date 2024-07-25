try:
    user_input = input("Enter a list of numbers separated by space: ")
    numbers = list(map(float, user_input.split()))
except ValueError:
    print("Please enter a valid list of numbers separated by space.")