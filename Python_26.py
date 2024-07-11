from typing import List


def remove_duplicates() -> List[str]:
    input_string = input("Enter a list of integers (comma separated): ")
    numbers = []
    for s in input_string.split(','):
        try:
            numbers.append(int(s))
        except ValueError:
            pass
    result = sorted(list(set(numbers)))
    return [str(num) for num in result]


result = remove_duplicates()
print(','.join(result))