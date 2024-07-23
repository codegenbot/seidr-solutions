from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]


while True:
    try:
        while True:
            numbers = input("Enter some numbers separated by space, or 'stop' to exit: ")
            if numbers.lower() == 'stop':
                break
            numbers_list = numbers.split()
            if len(numbers_list) != 0 and all(num.lower() == 'nan' for num in numbers_list):
                print("Program did not receive expected input")
                continue
            try:
                numbers = list(map(float, numbers_list))
                result = rescale_to_unit(numbers)
                print(result)
            except ValueError:
                print("Invalid input. Please enter valid numbers.")
    except ValueError:
        print("Invalid input. Please enter valid numbers.")