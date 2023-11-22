from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))

input_numbers = input().strip().split(',')
numbers = [int(num) for num in input_numbers]

result = remove_duplicates(numbers)
print(result)