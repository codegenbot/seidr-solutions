from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    if not numbers or any(num < 0 for num in numbers):
        return []
    return list(set(numbers))

numbers = list(map(int, input("Enter space-separated numbers: ").strip().split()))

result = remove_duplicates(numbers)
print(*result)