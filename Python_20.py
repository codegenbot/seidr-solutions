input_numbers = []
try:
    while True:
        value = input().strip()
        if value == "":
            break
        input_numbers.append(float(value))
except EOFError:
    pass