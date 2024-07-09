try:
    user_input = list(map(int, input("Enter a list of integers separated by spaces: ").split()))
except ValueError:
    print("Invalid input. Please enter integers separated by spaces.")