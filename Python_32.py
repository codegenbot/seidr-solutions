def solve(a, b, c):
    return -c / b


while True:
    try:
        a, b, c = map(int, input().split())
        break
    except ValueError:
        print("Input must contain three integers separated by spaces. Try again.")
        continue

result = solve(a, b, c)
print(result)