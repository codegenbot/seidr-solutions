from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return sorted(list(set(numbers)))

if __name__ == "__main__":
    numbers_input = input("Enter numbers separated by space: ").strip()
    if numbers_input == "":
        print("No numbers entered.")
    else:
        numbers = [int(num) for num in numbers_input.split()]
        result = remove_duplicates(numbers)
        print(result)