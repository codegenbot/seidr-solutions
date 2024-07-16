def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0 and isinstance(x, int)) * 2 if lst else 0

# Get input from user
lst = list(map(int, input().split()))

# Call the function with the provided list
result = double_the_difference(lst)

# Display the result
print(result)