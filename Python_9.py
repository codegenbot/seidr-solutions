from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    result = []
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

n = int(input("Enter the number of elements: "))
numbers = list(map(int, input("Enter the elements separated by space: ").split()))  
print(rolling_max(numbers))