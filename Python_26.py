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
    try:
        numbers = list(map(int, input().strip().split()))
        print(remove_duplicates(numbers))
    except ValueError:
        print("Please enter a list of integers separated by spaces.")