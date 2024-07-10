def add(x, y):
    return x + y

def main():
    try:
        x, y = map(int, input("Enter two integers separated by a space: ").split())
        result = add(x, y)
        print(result)
    except ValueError:
        print("Error: Invalid input")

if __name__ == "__main__":
    main()