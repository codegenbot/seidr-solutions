try:
    while True:
        a, b = map(int, input().split())
        print(a + b)
except EOFError:
    pass
except Exception as e:
    pass