try:
    numbers = list(map(int, input().split()))
    print(sum(numbers))
except ValueError:
    print("Invalid input. Please enter numbers separated by space.")