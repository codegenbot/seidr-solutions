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

# Validate input format
try:
    for num in user_input.split():
        int(num)
except ValueError:
    print("Invalid input format. Please enter a list of integers separated by space.")
    exit()

# Call the function with user input and print the result
print(find_zero(user_input))