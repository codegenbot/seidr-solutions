def double_the_difference(lst):
    small = min(lst)
    large = max(lst)
    diff = large - small
    return 2 * diff


# Prompt user for input
input_string = input("Enter numbers separated by spaces: ")
lst = [int(x) for x in input_string.split()]

# Call function with input
print(double_the_difference(lst))