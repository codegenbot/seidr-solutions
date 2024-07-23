from typing import List
def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(len(numbers)):
            if i != j and abs(numbers[i] - numbers[j]) <= threshold:
                return True
    return False