from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [elem for num in numbers[:-1] for elem in (num, delimiter)] + numbers[-1:]

if __name__ == "__main__":
    numbers = list(map(int, input().split()))
    delimiter = numbers.pop()
    result = intersperse(numbers, delimiter)
    print(' '.join(map(str, result)))