# Input handling
lst = [1, 3, 5, 7, 9]  # Example list of odd positive integers

# Function definition
def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0) * 2

# Call the function with the defined input
result = double_the_difference(lst)
print(result)