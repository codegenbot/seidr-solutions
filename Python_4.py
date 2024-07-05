from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

if __name__ == "__main__":
    import sys
    input_data = []
    for line in sys.stdin:
        input_data.extend(map(float, line.strip().split()))
    if not input_data:
        raise ValueError("Empty input provided.")
    print(mean_absolute_deviation(input_data))