```
from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([str(delimeter)])
        result.extend([str(numbers[i])])
    return result

if __name__ == "__main__":
    while True:
        try:
            input_numbers_str = input("Enter comma-separated numbers: ")
            delimeter_str = input("Enter the delimeter you want to use: ")

            if not input_numbers_str or not delimeter_str:
                print("Please enter valid input.")
                continue

            input_numbers = list(map(int, input_numbers_str.split(',')))
            delimeter = int(delimeter_str)
            
            if not input_numbers:
                print("Please enter at least one number.")
                continue
            
            print(', '.join(str(x) for x in intersperse(input_numbers, delimeter)))
            break
        except ValueError:
            print("Invalid number(s) entered. Please enter valid numbers.")
        except TypeError:
            print("Invalid delimeter entered. Please enter a valid integer.")