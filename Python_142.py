```
try:
    numbers = list(map(int, input().split()))
    print(sum_squares(numbers))
except ValueError:
    print("Invalid input. Please enter space-separated numbers.")