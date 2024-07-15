try:
    n = int(input().strip())
    numbers = list(map(int, input().strip().split()))
    # Add your code logic here
except ValueError:
    print("Input error. Please enter valid input.")