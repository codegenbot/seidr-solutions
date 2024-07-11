from typing import List


def rolling_max():
    result = []
    while True:
        try:
            T = int(input("Enter number of test cases: "))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")
    
    for _ in range(T):
        while True:
            numbers = list(map(int, input(f"Enter {len(result) + 1} numbers separated by space: ").split()))
            if not numbers:
                return []
            if sum(1 for x in numbers if x == 0): 
                break
            temp_result = [max(numbers[: i + 1]) for i in range(len(numbers))]
            result.extend(temp_result)
    return result