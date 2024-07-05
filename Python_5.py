from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    return result

if __name__ == "__main__":
    data = input().strip().split()  # Read all input in one call separated by spaces
    numbers = list(map(int, data[:-1]))  # All except the last item are numbers
    delimiter = int(data[-1])  # The last item is the delimiter
    result = intersperse(numbers, delimiter)
    print(" ".join(map(str, result)))