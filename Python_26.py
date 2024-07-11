from typing import List


def remove_duplicates(input_string: str) -> List[int]:
    numbers = list(map(int, filter(None, input_string.split(","))))
    result = sorted(list(set(numbers)))
    return result


result = remove_duplicates(input("Enter a list of integers (comma separated): "))
print(result)