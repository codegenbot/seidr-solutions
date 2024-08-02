from typing import List
def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_so_far = float('-inf')
    for num in numbers:
        max_so_far = max(max_so_far, num)
        result.append(max_so_far)
    return result

def main():
    numbers = list(map(int, input().split()))
    result = rolling_max(numbers)
    print(result)

if __name__ == "__main__":
    main()