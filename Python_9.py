numbers = []
try:
    while True:
        num = int(input())
        numbers.append(num)
except EOFError:
    pass

result = rolling_max(numbers)
print(result)