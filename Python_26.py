def remove_duplicates(numbers: str) -> list[int]:
    return list(set(map(int, numbers.split())))