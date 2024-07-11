from typing import List

def remove_duplicates():
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    print(sorted(set(numbers)))

remove_duplicates()