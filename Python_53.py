def add(a, b):
    return a + b

try:
    while True:
        x, y = map(int, input().strip().split())
        result = add(x, y)
        print(result)
except ValueError:
    print("Invalid input. Please provide two integers separated by space.")
except EOFError:
    pass
except Exception as e:
    print("An error occurred:", e)