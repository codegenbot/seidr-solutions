try:
    numbers = list(map(float, input().split()))
except EOFError:
    print("Invalid input. Please enter numbers separated by spaces.")