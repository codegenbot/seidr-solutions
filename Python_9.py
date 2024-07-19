from typing import List

def rolling_max() -> List[int]:
    n = int(input("Enter the number of elements: "))
    numbers = list(map(int, input("Enter the elements separated by space: ").split()))  
    max_num = float("-inf")
    result = []
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

print(rolling_max())