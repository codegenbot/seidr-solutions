from typing import List


def remove_duplicates(input_string: str) -> List[int]:
    numbers = []
    for s in input_string.split(','):
        try:
            numbers.append(int(s))
        except ValueError:
            pass
    result = sorted(list(set(numbers)))
    return result


result = remove_duplicates(input("Enter a list of integers (comma separated): "))
print(','.join(map(str, result)))