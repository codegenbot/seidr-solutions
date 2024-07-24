```
from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimiter])
        result.extend([str(numbers[i])])
    return result

if __name__ == "__main__":
    while True:
        try:
            input_numbers_str = input("Enter comma-separated numbers: ")
            delimiter_str = input("Enter the delimiter you want to use: ")

            input_numbers = list(map(int, input_numbers_str.split(',')))
            delimiter = int(delimiter_str)
            
            print(intersperse(input_numbers, delimiter))
            break
        except ValueError:
            print("Invalid number(s) entered. Please enter valid numbers.")
        except TypeError:
            print("Invalid delimiter entered. Please enter a valid integer.")