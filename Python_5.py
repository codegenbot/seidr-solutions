from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    interspersed = []
    for i in range(len(numbers)):
        interspersed.append(numbers[i])
        if i < len(numbers) - 1:
            interspersed.append(delimiter)
    return interspersed


# Read input from user
numbers = input().split()
numbers = [int(num) for num in numbers]

delimiter = int(input())

# Call the function with input values and print the result
result = intersperse(numbers, delimiter)
print(result)