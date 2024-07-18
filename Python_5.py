# Read input from the user and split by space
numbers = input("Enter numbers separated by space: ").split()
delimiter = input("Enter the delimiter: ")

# Call the function with list comprehension and join method
output = [x for x in numbers]
print(delimiter.join(output))