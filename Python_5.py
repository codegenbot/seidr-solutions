from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    return [val for pair in zip(numbers, [delimeter] * len(numbers)) for val in pair][:-1] if numbers else []

if __name__ == "__main__":
    numbers = list(map(int, input().strip().split()))
    delimeter = int(input().strip())
    result = intersperse(numbers, delimeter)
    print(result)