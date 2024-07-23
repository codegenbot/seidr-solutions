from typing import List

def remove_duplicates():
    numbers = input("Enter the list of numbers separated by space: ").split()
    numbers = [int(num) for num in numbers]
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result