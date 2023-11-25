inputs = []
while True:
    try:
        inputs.append(int(input()))
    except EOFError:
        break

total = sum([(x//3)-2 for x in inputs])
print(total)