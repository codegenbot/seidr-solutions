def solve(b, c):
    return -c / b

while True:
    try:
        b, c = map(int, input().split())
        break
    except ValueError:
        print("Input must contain two integers separated by spaces. Try again.")
        continue

result = solve(b, c)
print(result)