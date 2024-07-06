
def double_the_difference(list):
    sum_of_elements = sum(lst)
    return 2 * sum_of_elements

# Prompt user for input
lst = [int(x) for x in input().split()]

# Call function with input
print(double_the_difference(lst))