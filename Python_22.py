def filter_integers() -> List[int]:
    values = input().split()
    return [int(value) for value in values if value.isdigit()]