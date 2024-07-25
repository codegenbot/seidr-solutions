try:
    a, b, c = map(int, input().split())
    print(a + b + c)
except:
    print("Error: Invalid input. Please enter 3 integers separated by spaces.")