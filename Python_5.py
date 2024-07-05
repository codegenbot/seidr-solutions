from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [elem for num in numbers[:-1] for elem in (num, delimiter)] + numbers[-1:]

if __name__ == "__main__":
    input_data = input().strip().split()
    numbers = list(map(int, input_data[:-1]))
    delimiter = int(input_data[-1])
    result = intersperse(numbers, delimiter)
    print(result)