from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))

if __name__ == "__main__":
    try:
        numbers = list(map(int, input("Enter space-separated integers: ").split()))
        result = remove_duplicates(numbers)
        print(result)
    except ValueError:
        print("Invalid input. Please enter space-separated integers.")