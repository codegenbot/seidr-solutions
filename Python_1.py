def find_special_numbers(n: int) -> List[int]:
    result = []
    for i in range(1, n + 1):
        if i % 2 == 0 and len(str(i)) == len(str(i + 1)):
            result.append(i)
    return result