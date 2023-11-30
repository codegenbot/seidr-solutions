from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

numbers = input("Enter a list of numbers: ").split()
numbers = [int(num) for num in numbers]
result = remove_duplicates(numbers)
print(result)