def rolling_max(numbers: List[int]) -> List[int]:
    numbers = list(map(int, input().split()))
    max_num = float("-inf")
    result = []
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result