```
def has_close_elements(numbers_list: List[float], threshold: float) -> bool:
    for i in range(len(numbers_list)):
        for j in range(i + 1, len(numbers_list)):
            if abs(numbers_list[i] - numbers_list[j]) <= threshold:
                return True
    return False