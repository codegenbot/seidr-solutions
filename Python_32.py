def find_zero(xs: str):
    xs = list(map(int, xs.split()))
    if not xs or xs[0] != 0:
        return None
    if max(xs, key=abs) == 0:
        return 0
    a = max(xs, key=abs)
    for i in range(1, len(xs)):
        if xs[i] == a:
            return -i / xs[i]

# Get user input
user_input = input("Enter a list of integers separated by space: ")

# Ensure correct input format
if not user_input.strip():
    print("Invalid input. Please enter a list of integers separated by space.")
else:
    # Call the function with user input and print the result
    print(find_zero(user_input))