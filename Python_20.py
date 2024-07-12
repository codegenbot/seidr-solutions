numbers = []
while True:
    try:
        line = input()
        numbers.extend([float(num) for num in line.split()])
    except EOFError:
        break