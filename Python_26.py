from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return sorted(list(set(numbers)))


if __name__ == "__main__":
    numbers = []
    while True:
        try:
            line = input()
            numbers.extend(map(int, line.split()))
        except EOFError:
            break

    result = remove_duplicates(numbers)

    print(result)