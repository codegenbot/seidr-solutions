def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in input().split(','):
        num = int(num)  
        if str(num) not in seen:
            seen.add(str(num))
            result.append(num)
    return result