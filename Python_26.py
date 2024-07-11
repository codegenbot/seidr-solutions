def remove_duplicates(input_string: str) -> List[int]:
    numbers = list(map(int, input_string.split()))
    return sorted(set(numbers))