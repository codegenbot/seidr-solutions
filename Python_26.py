import sys
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result

def main():
    try:
        input_data = sys.stdin.read().strip()
        numbers = list(map(int, input_data.split()))
        print(remove_duplicates(numbers))
    except ValueError:
        print("Invalid input. Please enter integers separated by spaces.")

if __name__ == "__main__":
    main()