def add(a, b):
    return a + b

def main():
    print("Enter two integers separated by a space. Enter 'stop' to exit.")
    while True:
        try:
            a, b = map(int, input().split())
            if a == -1 or b == -1:
                break
            result = add(a, b)
            print(result)
        except ValueError:
            print("Error: Invalid input")
        except EOFError:
            break

if __name__ == "__main__":
    main()