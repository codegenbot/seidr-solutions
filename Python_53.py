def add(a, b):
    return a + b

try:
    while True:
        input_list = input().strip().split()
        if len(input_list) != 2:
            raise ValueError("Invalid input. Please provide two integers separated by space.")

        x, y = map(int, input_list)
        result = add(x, y)
        print(result)

except EOFError:
    pass
except ValueError as e:
    print(e)