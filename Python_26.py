from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in sorted(numbers):
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result


def main():
    numbers = input("Enter a list of space-separated integers: ")
    numbers = [int(num) for num in numbers.split()]
    print(remove_duplicates(numbers))


if __name__ == "__main__":
    main()