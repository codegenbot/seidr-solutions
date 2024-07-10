values = []
while True:
    try:
        values = list(map(int, input().split()))
        break
    except ValueError:
        pass