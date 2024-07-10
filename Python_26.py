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
    while True:
        try:
            num_str = input("Enter a number (or 'stop' to stop): ")
            if num_str.lower() == "stop":
                break
            numbers = list(map(int, num_str.split()))
            print(remove_duplicates(numbers))
        except ValueError:
            print("Invalid input. Please enter space separated integers.")