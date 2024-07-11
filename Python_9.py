Here is the modified code:

```
from typing import List


def rolling_max():
    result = []
    print("Enter number of test cases: ")
    T = int(input())
    
    for _ in range(T):
        while True:
            print(f"Enter {len(result) + 1} numbers separated by space: ")
            try:
                numbers = list(map(int, input().split()))
                if not numbers:
                    return result
                temp_result = [max(numbers[: i + 1]) for i in range(len(numbers))]
                result.extend(temp_result)
                break
            except ValueError:
                print("Invalid input. Please enter a number.")
    return result