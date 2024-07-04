from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result

def main():
    try:
        numbers = list(map(int, input().strip().split()))
        print(remove_duplicates(numbers))
    except ValueError:
        print("Invalid input. Please enter integers separated by spaces.")

if __name__ == "__main__":
    main()