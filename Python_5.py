from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    return result

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    data = input().split()
    numbers = list(map(int, data[:-1]))
    delimiter = int(data[-1])
    result = intersperse(numbers, delimiter)
    print(" ".join(map(str, result)))