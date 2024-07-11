from typing import List


def remove_duplicates(input_string: str) -> List[int]:
    numbers = list(map(int, ''.join(filter(str.isdigit, input_string.replace(',', ''))).split()))
    result = sorted(list(set(map(int, numbers))))
    return result


while True:
    user_input = input("Enter your string (numbers and commas only): ")
    if all(char in '0123456789, ' for char in user_input):
        break
    else:
        print("Invalid input. Please enter a string with numbers and commas only.")

result = remove_duplicates(user_input)
print(result)