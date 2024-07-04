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
        raw_input = input().strip()
        if not raw_input:
            raise ValueError("No input provided.")
        numbers = list(map(int, raw_input.split()))
        print(remove_duplicates(numbers))
    except ValueError as e:
        print(f"Invalid input. {str(e)}")

if __name__ == "__main__":
    main()