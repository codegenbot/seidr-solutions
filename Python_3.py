operations = []
while True:
    num = input()
    if num == "":
        break
    operations.append(int(num))

def below_zero(operations):
    count = 0
    for num in operations:
        if num < 0:
            count += 1
    return count

result = below_zero(operations)
print(result)