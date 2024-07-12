def main():
    numbers = list(map(int, input().split()))
    result = rolling_max(numbers)
    print(result)

main()