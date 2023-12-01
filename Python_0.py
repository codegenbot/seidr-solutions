from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    sorted_numbers = sorted(numbers)
    for i in range(len(sorted_numbers) - 1):
        if sorted_numbers[i+1] - sorted_numbers[i] < threshold:
            return True
    return False

def main():
    n = int(input("Enter the number of elements: "))
    numbers = []
    for _ in range(n):
        num = float(input("Enter a number: "))
        numbers.append(num)
    threshold = float(input("Enter the threshold value: "))

    result = has_close_elements(numbers, threshold)
    print("Result:", result)

if __name__ == "__main__":
    main()