def rescale_to_unit(numbers: list[float]) -> list[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

n = int(input())
numbers = [float(input()) for _ in range(n)]
print(rescale_to_unit(numbers))