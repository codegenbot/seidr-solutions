```
from typing import List


def rolling_max(input_str: str) -> List[int]:
    while True:
        input_str = input("Enter a string with space-separated numbers: ")
        if all(char.isdigit() or char in ' ()' for char in input_str):
            break

    input_str = "".join(filter(str.isdigit, input_str))

    numbers = []
    for num in input_str.split():
        numbers.append(int(num))

    if len(numbers) <= 1:
        return [0]

    result = [max(map(int, numbers[: i + 1])) for i in range(len(numbers))]
    return result