from typing import List

def remove_duplicates(numbers: str):
    try:
        numbers = [int(num) for num in numbers.split()]
    except ValueError:
        return []
    seen = set()
    result = []
    for num in sorted(numbers):
        if num not in seen:
            result.append(num)
            seen.add(num)
    return result

numbers = input("Enter a list of space-separated numbers: ")
print(remove_duplicates(numbers))