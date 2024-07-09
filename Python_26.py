from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in numbers if numbers.count(num) == 1]

numbers = []
while True:
    try:
        line = input()
        if not line:
            break
        numbers.extend(map(int, line.split()))
    except EOFError:
        break

print(remove_duplicates(numbers))