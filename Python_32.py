try:
    values = list(map(int, input("Enter space-separated numbers: ").strip().split()))
    result = sum(val * val for val in values)
    print(result)
except ValueError:
    print("Input error: Please enter valid integers separated by spaces.")