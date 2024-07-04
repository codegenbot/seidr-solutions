from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    return [num for num in numbers if num not in seen and not seen.add(num)]

# To read input from user
if __name__ == "__main__":
    numbers = list(map(int, input("Enter the numbers separated by space: ").split()))
    print(remove_duplicates(numbers))