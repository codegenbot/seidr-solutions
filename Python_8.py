try:
    n = int(input().strip())
    numbers = list(map(int, input().strip().split()))
    numbers.sort()
    max_diff = max(numbers) - min(numbers)
    print(max_diff)
except ValueError:
    print("Input error. Please enter valid input.")