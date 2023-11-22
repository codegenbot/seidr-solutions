from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

# Read input from user
input_numbers = list(map(int, input().split()))  # Fix: read the input as a single line of space-separated numbers

result = remove_duplicates(input_numbers)
print(result)