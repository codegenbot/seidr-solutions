try:
    user_input = list(map(int, input().split()))
except ValueError:
    print("Invalid input. Please enter integers separated by spaces.")