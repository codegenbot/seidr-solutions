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
    import sys
    numbers = []
    try:
        for line in sys.stdin:
            if line.strip():
                numbers.extend(map(int, line.strip().split()))
        print(remove_duplicates(numbers))
    except ValueError:
        print("Invalid input. Please enter integers separated by spaces.")

if __name__ == "__main__":
    main()