try:
    n = int(input())
    if n <= 1:
        raise ValueError
except ValueError:
    print("Please enter a valid positive integer greater than 1.")
except Exception:
    print("An unexpected error occurred.")