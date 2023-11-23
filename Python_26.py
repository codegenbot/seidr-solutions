from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

try:
    input_list = list(map(int, input().split()))
except ValueError:
    print("Invalid input. Please enter space-separated numbers only.")
else:
    result = remove_duplicates(input_list)
    print(*result)