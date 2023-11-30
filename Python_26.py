from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

numbers_string = input("Enter a list of numbers separated by spaces: ")
numbers = list(map(int, numbers_string.split()))
result = remove_duplicates(numbers)
print(result)