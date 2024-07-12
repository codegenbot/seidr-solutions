numbers = []
while True:
    try:
        line = input()
        if line:
            numbers.append(int(line))
        else:
            break
    except EOFError:
        break

def rolling_max(numbers):
    result = []
    for i in range(len(numbers)):
        current_max = max(numbers[i:])
        result.append(current_max)
    return result

print(rolling_max(numbers))