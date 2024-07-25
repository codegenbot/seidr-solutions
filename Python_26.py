from typing import list

def remove_duplicates(numbers: list) -> list:
    seen = set()
    result = [num for num in numbers if not (num in seen or seen.add(num))]
    return result

if __name__ == "__main__":
    user_input = input("Enter a list of numbers (separated by spaces): ")
    numbers = [int(num) for num in user_input.split()]
    print(remove_duplicates(numbers))