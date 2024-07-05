from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))

if __name__ == "__main__":
    try:
        numbers = list(map(int, input().strip().split()))
        result = remove_duplicates(numbers)
        print(result)
    except:
        print([])