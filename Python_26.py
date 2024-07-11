from typing import list

def remove_duplicates():
    numbers = [int(x) for x in input("Enter space-separated numbers: ").split()]
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result