def create_output(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()  # Remove extra delimiter at the end
    return result

# Input from user
numbers = input("Enter numbers separated by space: ").split()
delimiter = input("Enter delimiter: ")

# Call the function
output = create_output(numbers, delimiter)
print(output)