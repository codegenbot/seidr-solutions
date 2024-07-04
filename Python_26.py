from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    return [num for num in numbers if not (num in seen or seen.add(num))]

if __name__ == "__main__":
    try:
        numbers = list(map(int, input("Enter numbers separated by spaces: ").strip().split()))
        print(remove_duplicates(numbers))
    except ValueError:
        print("Invalid input. Please enter integers separated by spaces.")