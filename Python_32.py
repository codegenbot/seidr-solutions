# Prompt user to enter the size of the list
n = int(input("Enter the size of the list: "))
# Prompt user to enter the list values
print("Enter space-separated values for the list:")
# Read 'n' input values from user
xs = list(map(float, input().split()[:n]))

# Call the function with the input list
result = find_zero(xs)

# Print the result
print(result)