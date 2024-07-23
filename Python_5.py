```
from typing import List

def main():
    input_numbers = input("Enter the numbers (space-separated): ")
    input_delimiter = int(input("Enter the delimiter: "))
    
    numbers = [int(num) for num in input_numbers.split()]

    result = intersperse(numbers, input_delimiter)
    print(result)

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) == 1:
        return [numbers[0]]
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.append(delimiter)
        result.append(numbers[i])
    if len(numbers) > 2:
        result.insert(0, delimiter)
    return result

if __name__ == "__main__":
    main()