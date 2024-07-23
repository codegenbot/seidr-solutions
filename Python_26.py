from typing import List

def remove_duplicates():
    numbers = list(map(int, input("Enter a series of space-separated numbers: ").split()))
    return list(set(numbers))

print(remove_duplicates())