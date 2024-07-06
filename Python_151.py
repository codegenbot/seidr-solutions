def double_the_difference(list):
    small = min(list)
    large = max(list)
    diff = large - small
    return 2 * diff


# Prompt user for input and check for valid input
lst = []
while not lst:
    user_input = input("Enter numbers separated by spaces: ")
    if len(user_input) > 0:
        lst = [int(x) for x in user_input.split()]
        break
else:
    print("Please enter a valid list of numbers.")

# Call function with input
print(double_the_difference(lst))