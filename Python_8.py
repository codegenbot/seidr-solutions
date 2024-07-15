try:
    n = int(input())
    numbers = list(map(int, input().split()))
    # Your additional code here
except ValueError:
    print("Invalid input. Please enter valid integers.")