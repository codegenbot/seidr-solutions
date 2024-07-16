from typing import List

numbers = list(map(int, input().split()))

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in numbers if numbers.count(num) == 1]

result = remove_duplicates(numbers)
print(result)