from typing import List


def remove_duplicates(input_string: str) -> List[int]:
    numbers = list(map(int, input_string.split(',')))
    return list(set(numbers))  # Convert set back to list


result = remove_duplicates(input("Enter your string: "))
print(result)