def main():
    print("Enter two integers separated by a space. Enter 'stop' to exit.")
    while True:
        try:
            x, y = map(int, input().strip().split())
            result = add(x, y)
            print(result)
        except ValueError:
            print("Error: Invalid input")
        except EOFError:
            break

if __name__ == "__main__":
    main()