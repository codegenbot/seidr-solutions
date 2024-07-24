from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimeter])
        result.extend([str(numbers[i])])
    return result

if __name__ == "__main__":
    try:
        input_numbers = list(map(int, input("Enter comma-separated numbers: ").split(',')))
    except ValueError:
        print("Invalid input. Please enter integers.")
    else:
        delimeter = int(input("Enter the delimiter you want to use: "))
        print(intersperse(input_numbers, str(delimeter)))