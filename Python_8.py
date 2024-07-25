try:
    numbers = list(map(int, input().split()))
    # Continue your code logic using the 'numbers' list
except (ValueError, EOFError):
    print("Input data is not in the expected format")