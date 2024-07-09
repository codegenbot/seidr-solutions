try:
    numbers = [float(x) for x in input("Enter a list of floats separated by spaces: ").split()]
except ValueError:
    print("Invalid input. Please enter valid floats separated by spaces.")
    exit()

# Call the function with user input
output = find_closest_elements(numbers)
print(output)