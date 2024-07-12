from typing import List

def format_numbers(numbers: List[int], delimiter: str) -> List[str]:
    return [str(num) for num in numbers]

def intersperse(numbers: List[int], delimiter: str) -> str:
    return delimiter.join(format_numbers(numbers, delimiter))

numbers = [1, 2, 3, 4, 5]
delimiter = ","
result = intersperse(numbers, delimiter)
print(result)