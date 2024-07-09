def solve(a, b, c):
    return -c / b if b != 0 else "Division by zero is not allowed!"


try:
    a, b, c = map(int, input().split())
    result = solve(a, b, c)
    print(result)
except ValueError:
    print("Invalid input. Please provide three integers separated by spaces.")