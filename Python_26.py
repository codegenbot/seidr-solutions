from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))

if __name__ == "__main__":
    numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))
    result = remove_duplicates(numbers)
    print(result)