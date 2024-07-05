from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    return [elem for num in numbers[:-1] for elem in (num, delimeter)] + numbers[-1:]

if __name__ == "__main__":
    numbers = list(map(int, input().strip().split()))
    delimeter = int(input().strip())
    result = intersperse(numbers, delimeter)
    print(' '.join(map(str, result)))