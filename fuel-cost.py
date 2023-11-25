num_list = []
while True:
    try:
        num = int(input())
        num_list.append(num)
    except EOFError:
        break

result = sum([math.floor(num/3) - 2 for num in num_list])
print(result)