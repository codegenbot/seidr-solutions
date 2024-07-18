from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in numbers if numbers.count(num) == 1]

numbers = [1, 2, 2, 3, 4, 4, 5]
output = remove_duplicates(numbers)
print(output)