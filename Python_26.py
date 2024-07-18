from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in numbers if numbers.count(num) == 1]

numbers = []
while True:
    try:
        num = int(input("Enter a number (or press Enter to stop): "))
        numbers.append(num)
    except ValueError:
        break

output = remove_duplicates(numbers)
print(output)