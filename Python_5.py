from typing import List


def get_input() -> (List[int], int):
    numbers = list(map(int, input().split()))
    delimiter = int(input())
    return numbers, delimiter

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        result.append(delimiter)
    return result[:-1]

numbers, delimiter = get_input()

print(intersperse(numbers, delimiter))