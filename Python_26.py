```
from typing import list

def remove_duplicates(numbers: list) -> list:
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result

if __name__ == "__main__":
    while True:
        user_input = input("Enter a list of numbers (separated by spaces) or use commas to separate: ")
        numbers = [int(num) for num in user_input.replace(',', ' ').split()]
        if len(numbers) > 0:
            break
    print(remove_duplicates(numbers))