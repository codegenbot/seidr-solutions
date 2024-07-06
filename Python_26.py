from typing import List

def remove_duplicates():
    numbers = input("Enter numbers separated by space: ").split()
    try:
        numbers = [int(num) for num in numbers]
    except ValueError:
        print("Invalid input. Please enter only integers.")
        return
    seen = set()
    result = []
    for num in sorted(numbers):
        if num not in seen:
            result.append(num)
            seen.add(num)
    print(result)

remove_duplicates()