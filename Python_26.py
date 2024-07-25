from typing import list

def remove_duplicates(numbers: list) -> list:
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(str(num))  
    return result

if __name__ == "__main__":
    while True:
        user_input = input("Enter a list of numbers (separated by spaces or commas) : ")
        try:
            numbers = [int(num) for num in user_input.replace(',', ' ').split()]
            if len(numbers) > 0:
                break
        except ValueError:
            print("Invalid input. Please enter valid numbers separated by spaces or commas.")
    print(remove_duplicates(numbers))