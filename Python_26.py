from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

if __name__ == "__main__":
    input_numbers = list(map(int, input().split()))
    print(remove_duplicates(input_numbers))