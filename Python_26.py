from typing import List

def remove_duplicates(numbers: List[str]) -> List[int]:
    user_input = input("Enter the list of numbers separated by space or comma: ")
    
    try:
        numbers = list(map(int, user_input.replace(',', ' ').split()))
    except ValueError:
        print("Invalid input. Please enter a list of numbers separated by space or comma.")
        return []
    
    return sorted(list(set(numbers)))

if __name__ == "__main__":
    numbers = remove_duplicates([])
    print(f"Remove duplicates: {numbers}")