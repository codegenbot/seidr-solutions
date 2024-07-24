```
def has_close_elements(numbers_list: list[float], threshold: float) -> bool:
    if len(numbers_list) < 2:
        return False
    for i in range(len(numbers_list) - 1):
        for j in range(i + 1, len(numbers_list)):
            if abs(numbers_list[i] - numbers_list[j]) <= threshold:
                return True
    return False