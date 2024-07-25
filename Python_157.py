try:
    a, b, c = map(int, input().split())
    print(max(a, b, c))
except:
    print("Invalid input. Please enter three integers separated by spaces.")