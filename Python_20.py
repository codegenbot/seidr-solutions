try:
    a, b, c = map(int, input().split())
    print(a + b + c)
except ValueError:
    print("Error: Input format is incorrect. Please provide three integers separated by spaces.")