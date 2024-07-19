from typing import List, Tuple

def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        max_numbers.append(max_num)
    return max_numbers

if __name__ == "__main__":
    numbers = []
    while True:
        try:
            num_input = input("Enter a number or press Enter to finish: ")
            if num_input == "":
                if not numbers:
                    raise ValueError
                break
            num = int(num_input)
            numbers.append(num)
        except ValueError:
            print("Please enter only integers.")
    result = rolling_max(numbers)
    print(result)