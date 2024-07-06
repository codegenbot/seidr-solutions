```
import sys

def remove_duplicates(numbers: list[int]) -> list[int]:
    numbers = list(map(int, sys.stdin.readline().split()))
    unique_numbers = [num for num in set(numbers)]
    return sorted(unique_numbers)

if __name__ == "__main__":
    numbers = remove_duplicates([])
    print(*numbers)