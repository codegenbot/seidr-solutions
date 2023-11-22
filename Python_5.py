from typing import List
import sys


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i != len(numbers) - 1:
            result.append(delimiter)
    return result


def main():
    numbers = [int(num) for num in sys.argv[1].split()]
    delimiter = int(sys.argv[2])
    result = intersperse(numbers, delimiter)
    print(result)


if __name__ == "__main__":
    main()