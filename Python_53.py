def add(pair):
    return sum(pair)

def main():
    while True:
        try:
            inputs = input().strip()
            if not inputs:
                break
            x, y = map(int, inputs.split())
            result = add((x, y))
            print(result)
        except (ValueError, EOFError):
            print("Error: Invalid input")

if __name__ == "__main__":
    main()