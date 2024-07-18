from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in numbers if numbers.count(num) == 1]

print("Enter a list of numbers separated by spaces:")
numbers = list(map(int, input().split()))
output = remove_duplicates(numbers)
print(output)