from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float('-inf')
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

# Input handling
n = int(input("Enter the number of elements: "))
numbers = [int(input()) for _ in range(n)]

# Output
print(rolling_max(numbers))