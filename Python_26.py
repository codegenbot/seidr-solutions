from typing import List


def remove_duplicates(input_string: str) -> List[int]:
    numbers = list(map(int, ''.join(filter(str.isdigit, input_string)).split(',')))
    result = sorted(list(set(map(int, numbers))))
    return result


result = remove_duplicates(input("Enter your string: "))
print(result)