```Python
def remove_duplicates(numbers: list[int]) -> list[int]:
    """
    """
    input_numbers = list(map(int, input("Enter space-separated numbers: ").split()))
    return list(set(input_numbers))