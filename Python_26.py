from typing import List


def remove_duplicates(input_string: str) -> List[str]:
    numbers = list(map(int, input_string.replace(",", "").split()))
    return [str(x) for x in set(numbers)]


result = remove_duplicates(input("Enter your string: "))
print(result)