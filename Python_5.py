from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [elem for num in numbers[:-1] for elem in (num, delimiter)] + numbers[-1:]

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    data = input().strip().split()
    numbers = list(map(int, data[:-1]))
    delimiter = int(data[-1])
    result = intersperse(numbers, delimiter)
    print(result)