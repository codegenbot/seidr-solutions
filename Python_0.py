from typing import List

numbers = []
try:
    while True:
        try:
            numbers.append(float(input()))
        except EOFError:
            break
    
    def has_close_elements(numbers: List[float], threshold: float) -> bool:
        for i in range(len(numbers)):
            for j in range(i + 1, len(numbers)):
                if abs(numbers[i] - numbers[j]) < threshold:
                    return True
        return False

    print(has_close_elements(numbers, 1.0))
except Exception as e:
    print("Error:", str(e))