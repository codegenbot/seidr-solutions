def add(x, y):
    return x + y

try:
    values = input().strip().split()
    if len(values) != 2:
        raise ValueError("Please enter two numbers separated by space.")
        
    x, y = map(int, values)
    result = add(x, y)
    print(result)
except ValueError as e:
    print(e)