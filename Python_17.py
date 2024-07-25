try:
    user_input = list(map(int, input().strip().split()))
    # Add your code logic here

except ValueError:
    print("Invalid input. Please provide integers separated by spaces.")