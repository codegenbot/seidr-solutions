def remove_duplicates(numbers: list[int]) -> list[int]:
    return list(set(map(int, input("Enter space-separated numbers: ").split())))