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
    numbers = list(map(int, input("Enter space separated integers: ").split()))
    print(remove_duplicates(numbers))