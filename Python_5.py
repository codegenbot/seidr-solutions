from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    return result

if __name__ == "__main__":
    input_data = list(map(int, input().strip().split()))
    delimiter = input_data.pop()
    result = intersperse(input_data, delimiter)
    print(' '.join(map(str, result)))