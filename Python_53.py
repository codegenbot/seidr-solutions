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
        except ValueError:
            print("Error: Invalid input format")

if __name__ == "__main__":
    main()