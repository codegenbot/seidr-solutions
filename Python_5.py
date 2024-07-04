from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    return result

if __name__ == "__main__":
    inputs = list(map(int, input().strip().split()))
    numbers = inputs[:-1]
    delimiter = inputs[-1]
    result = intersperse(numbers, delimiter)
    print(result)