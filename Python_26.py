from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result


if __name__ == "__main__":
    user_input = input("Enter a list of numbers (space-separated): ")
    user_numbers = [int(x) for x in user_input.split()]
    print(remove_duplicates(user_numbers))