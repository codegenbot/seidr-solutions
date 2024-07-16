input_numbers = []
try:
    while True:
        num = int(input())
        input_numbers.append(num)
except:
    pass
result = rolling_max(input_numbers)
print(result)