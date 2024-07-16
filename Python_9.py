def rolling_max(numbers):
    return [max(numbers[i:i+3]) for i in range(len(numbers)-2)]

if __name__ == "__main__":
    numbers = list(map(int, input("Enter a list of numbers separated by space: ").split()))
    result = rolling_max(numbers)
    print(*result)