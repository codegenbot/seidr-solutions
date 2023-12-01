from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    return result

# Read inputs from the user
numbers = list(map(int, input("Enter a list of numbers: ").split()))
delimiter = int(input("Enter the delimiter: "))

# Call the function with the user inputs
output = intersperse(numbers, delimiter)

# Print the output
print(output)