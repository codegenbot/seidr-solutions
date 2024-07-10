```
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))

if __name__ == "__main__":
    while True:
        print("Enter comma-separated integers: ")
        numbers = input().strip()
        if not numbers.replace(",", "").replace(" ", ""):
            print("No input entered.")
            continue
        try:
            numbers = [int(num) for num in filter(None, numbers.split(","))]
            print(remove_duplicates(numbers))
            cont = input("Do you want to continue? (y/n): ")
            if cont.lower() != "y":
                break
            else:
                continue
        except ValueError as e:
            print(f"Invalid input. {str(e)}. Please enter comma-separated integers.")
            continue