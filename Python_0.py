from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

while True:
    try:
        numbers = [float(num) for num in input().split()]
        threshold = float(input())
        print("Close elements found:", has_close_elements(numbers, threshold))
        break
    except ValueError:
        print("Error: Please enter a valid list of numbers.")
    except IndexError:
        print("Error: List of numbers must contain at least two elements.")
    except Exception as e:
        print("Error:", str(e))