from typing import List

def remove_duplicates() -> List[int]:
    numbers = list(map(int, input("Enter a list of integers separated by space: ").split()))
    return [num for num in numbers if numbers.count(num) == 1]

output = remove_duplicates()
print(output)