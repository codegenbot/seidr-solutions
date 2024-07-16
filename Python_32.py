xs = []
try:
    while True:
        xs.extend(map(int, input().split()))
except EOFError:
    print(xs)