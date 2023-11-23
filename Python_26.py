from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

input_numbers = []
while True:
    try:
        input_numbers.append(int(input()))
    except EOFError:
        break

result = remove_duplicates(input_numbers)
print(result)