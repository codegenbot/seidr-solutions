```
def remove_duplicates(numbers: list[int]) -> list[int]:
    return list(set(map(int, input("Enter numbers separated by space: ").split())))