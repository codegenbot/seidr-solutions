from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))

input_numbers = input("Enter a list of numbers separated by spaces: ")
numbers_list = [int(num) for num in input_numbers.split()]
result = remove_duplicates(numbers_list)
print(result)