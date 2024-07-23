from typing import List


def remove_duplicates():
    seen = set()
    result = []
    while True:
        user_input = input("Enter the list of numbers separated by space (or 'stop' to finish): ")
        if user_input.lower() == 'stop':
            break
        numbers = [int(num) for num in user_input.split()]
        for num in numbers:
            if num not in seen:
                seen.add(num)
                result.append(num)
    return result