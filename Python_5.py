from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [elem for num in numbers[:-1] for elem in (num, delimiter)] + numbers[-1:]

def main():
    numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))
    delimiter = int(input("Enter delimiter: "))
    result = intersperse(numbers, delimiter)
    print(result)

if __name__ == "__main__":
    main()