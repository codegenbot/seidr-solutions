from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    interspersed = []
    for i in range(len(numbers)):
         interspersed.append(numbers[i])
         if i < len(numbers) - 1:
             interspersed.append(delimiter)
    return interspersed

numbers = input().split()
numbers = [int(num) for num in numbers]

delimiter = int(input())

result = intersperse(numbers, delimiter)
print(result)