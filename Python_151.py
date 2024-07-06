
def double_the_difference(list):
    small = min(list)
    large = max(list)
    diff = large - small
    return 2 * diff

# Prompt user for input until valid input is received
while True:
    lst = [int(x) for x in input("Enter numbers separated by spaces: ").split()]
    if len(lst) > 0 and all(isinstance(num, int) for num in lst):
        break
    print("Invalid input. Please enter only integers separated by spaces.")

# Call function with valid input
print(double_the_difference(lst))