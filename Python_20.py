try:
    user_input = input("Enter a list of numbers separated by space: ")
    numbers = [float(num) for num in user_input.split()]
except ValueError:
    print("Please enter a valid list of numbers separated by space.")