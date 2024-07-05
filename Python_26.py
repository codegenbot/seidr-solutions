from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in numbers if numbers.count(num) == 1]

if __name__ == "__main__":
    numbers = list(map(int, input().strip().split()))
    result = remove_duplicates(numbers)
    print(result)