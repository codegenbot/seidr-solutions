from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    numbers = list(set(numbers))
    return numbers

n = int(input())
numbers = []
for _ in range(n):
    numbers.append(int(input()))

result = remove_duplicates(numbers)
for num in result:
    print(num)