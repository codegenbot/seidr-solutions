from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))


while True:
    try:
        input_list = [int(num) for num in input("Enter space-separated numbers: ").split()]
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")

result = remove_duplicates(input_list)
print(*result)