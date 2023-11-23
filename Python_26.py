from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

input_numbers = list(map(int, input("Enter the numbers separated by space: ").strip().split()))
result = remove_duplicates(input_numbers)
print(*result)