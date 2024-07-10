def add(x, y):
    return x + y

def main():
    while True:
        try:
            x = int(input().strip())
            if x == 0:
                break
            y = int(input().strip())
            result = add(x, y)
            print(result)
        except ValueError:
            print("Error: Invalid input")

if __name__ == "__main__":
    main()