def rolling_max(numbers):
    max_values = []
    for i in range(len(numbers) - 1):
        max_values.append(max(numbers[i], numbers[i + 1]))
    return max_values

if __name__ == "__main__":
    numbers = list(map(int, input().strip().split()))
    result = rolling_max(numbers)
    print(*result)