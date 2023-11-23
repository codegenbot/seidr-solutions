from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))


input_list = []
while True:
    try:
        input_str = input("Enter space-separated numbers: ")
        input_list = [int(num) for num in input_str.split()]
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")

result = remove_duplicates(input_list)
print(*result)