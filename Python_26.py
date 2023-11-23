from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    if not numbers or any(num < 0 for num in numbers):
        return []
    return list(set(numbers))

input_str = input("Enter integers separated by a space: ")
result = remove_duplicates(list(map(int, input_str.strip().split())))
print(*result)