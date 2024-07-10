def add(pair):
    return sum(pair)

def main():
    while True:
        try:
            inputs = input().strip().split()
            x, y = map(int, inputs)
            if x == 0:
                break
            result = add((x, y))
            print(result)
        except ValueError:
            print("Error: Invalid input")

if __name__ == "__main__":
    main()