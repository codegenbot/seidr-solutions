from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for number in numbers:
        result.append(number)
        result.append(delimiter)
    return result

# Prompt the user for input
numbers = input("Enter numbers separated by space: ").split()
delimiter = int(input("Enter delimiter: "))
numbers = [int(number) for number in numbers]

# Call the function and print the output
output = intersperse(numbers, delimiter)
print(output)