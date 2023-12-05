def remove_duplicates(numbers: list) -> list:
    unique_elements = set()
    result = []
    for num in numbers:
        if num not in unique_elements and (num != result[-1] or num not in result):
            unique_elements.add(num)
            result.append(num)
    return result