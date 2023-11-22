def add(x: int, y: int):
    return x + y

# Read input from user
input_nums = input().split()
num1 = int(input_nums[0])
num2 = int(input_nums[1])

# Call the add function with the input numbers
result = add(num1, num2)

# Print the result
print(result)