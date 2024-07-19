if __name__ == "__main__":
    numbers = list(map(int, input().split()))
    result = rolling_max(numbers)
    print(result)