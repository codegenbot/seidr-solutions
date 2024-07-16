if __name__ == "__main__":
    numbers = list(map(int, input().strip().split()))
    result = rolling_max(numbers)
    print(*result)