def remove_duplicates(numbers: Set[int]) -> Set[int]:
    return {num for num in numbers if sum(1 for n in numbers if n == num) == 1}