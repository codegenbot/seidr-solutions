while True:
    try:
        n = int(input())
        numbers = list(map(int, input().split()))
        result = sum(numbers)
        print(result)
        break
    except ValueError:
        print("Invalid input. Please provide valid input.")