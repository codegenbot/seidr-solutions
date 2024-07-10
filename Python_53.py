def main():
    try:
        x, y = map(int, raw_input().strip().split())
        result = add(x, y)
        print(result)
    except ValueError:
        print("Error: Invalid input")