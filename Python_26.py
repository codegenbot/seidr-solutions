from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

user_input = input("Enter numbers separated by commas: ")
numbers = [int(num) for num in user_input.split(",")]
result = remove_duplicates(numbers)
print(result)