try:
    n = int(input())
    numbers = list(map(int, input().split()))
    print(numbers)
except ValueError:
    print("Invalid input. Please provide valid input.")