try:
    values = list(map(int, input().split()))
    result = sum(val * val for val in values)
    print(result)
except EOFError:
    pass