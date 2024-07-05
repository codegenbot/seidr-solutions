from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    count = {}
    for num in numbers:
        count[num] = count.get(num, 0) + 1
    return [num for num in numbers if count[num] == 1]

if __name__ == "__main__":
    numbers = list(map(int, input().strip().split()))
    result = remove_duplicates(numbers)
    print(result)