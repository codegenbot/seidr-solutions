from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return round(sum(deviation) / len(deviation), 2)

def main():
    n = int(input())
    numbers = list(map(float, input().split()))
    result = mean_absolute_deviation(numbers)
    print(result)

if __name__ == "__main__":
    main()