from typing import List


def remove_duplicates(numbers: List[int]) -> List[str]:
    seen = set()
    result = []
    for num in numbers:
        if str(num) not in seen:
            seen.add(str(num))
            result.append(str(num))
    return [str(num) for num in result]


if __name__ == "__main__":
    while True:
        user_input = input(" Enter a list of numbers (separated by spaces or commas) : ").replace(",", " ")
        try:
            numbers = [int(num) for num in user_input.split()]
            if len(numbers) > 0:
                break
        except ValueError:
            print(
                "Invalid input. Please enter valid numbers separated by spaces or commas."
            )
    print(remove_duplicates(numbers))