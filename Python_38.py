# Input
num_elements = int(input("Enter the number of elements: "))
input_list = [int(input(f"Enter element {i + 1}: ")) for i in range(num_elements]

# Calculation
result = sum(input_list)

# Output
print(result)