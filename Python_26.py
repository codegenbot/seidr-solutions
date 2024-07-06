from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = set()
    result = []

    for number in numbers:
        if number not in unique_numbers:
            unique_numbers.add(number)
            result.append(str(number))

    return [int(num) for num in result]