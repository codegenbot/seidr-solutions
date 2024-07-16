if __name__ == "__main__":
    n = int(input())  # Input the number of elements
    numbers = list(map(int, input().split()))  # Input the list of numbers
    result = rolling_max(numbers)
    print(*result)