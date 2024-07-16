def remove_duplicates(numbers: List[int]) -> List[int]:
    numbers = list(map(int, input().split()))
    return [num for num in numbers if numbers.count(num) == 1]