from typing import List

def remove_duplicates():
    numbers = input("Enter some numbers (separated by space): ").split()
    unique_numbers = set(map(int, numbers))
    print(unique_numbers)

remove_duplicates()