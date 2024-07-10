def add(pair):
    return sum(pair)

def main():
    while True:
        try:
            inputs = input().strip().split()
            if not inputs:
                break
            x, y = map(int, inputs)
            result = add((x, y))
            print(result)
        except (ValueError, EOFError):
            break

if __name__ == "__main__":
    main()