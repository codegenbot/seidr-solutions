from typing import List


def remove_duplicates(input_string: str) -> List[str]:
    numbers = []
    for s in input_string.split(','):
        try:
            numbers.append(s)
        except ValueError:
            pass
    result = sorted(list(set(numbers)))
    return [str(n) for n in result]


result = remove_duplicates(input("Enter your string: "))
print(result)