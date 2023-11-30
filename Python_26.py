from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return sorted(list(set(numbers)))

if __name__ == "__main__":
    # Replace input() with a sample input list of numbers
    numbers = [1, 2, 2, 3, 4, 4, 5, 5, 5]

    result = remove_duplicates(numbers)

    print(result)