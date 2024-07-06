def remove_duplicates(numbers: list[int]) -> list[int]:
    input_numbers = list(map(int, input("Enter space-separated numbers: ").split()))
    unique_numbers = [num for num in set(input_numbers)]
    return sorted(unique_numbers)