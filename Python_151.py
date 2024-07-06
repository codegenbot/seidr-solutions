def double_the_difference(list):
    small = min(list)
    large = max(list)
    diff = large - small
    return 2 * diff


# Prompt user for input
lst = list(map(int, input("Enter numbers separated by spaces: ").split()))

# Call function with input
print(double_the_difference(lst))