from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        if i > 1:
            result.extend([delimeter])
        result.extend([numbers[i]])
    return result

if __name__ == "__main__":
    input_numbers = list(map(int, input("Enter comma-separated numbers: ").split(',')))
    delimeter = int(input("Enter the delimeter you want to use: "))
    print(intersperse(input_numbers, delimeter))