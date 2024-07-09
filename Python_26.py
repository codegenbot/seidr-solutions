def process_input(arr: List[int]) -> List[int]:
    result = []
    for num in arr:
        if num % 2 == 0:
            result.append(num * 2)
        else:
            result.append(num)
    return result