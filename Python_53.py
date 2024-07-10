def add(a, b):
    return a + b

def main():
    print("Enter two integers separated by a space. Enter 'stop' to exit.")
    while True:
        try:
            num = int(input())
            if num == -1:
                break
            result = num * 2
            print(result)
        except ValueError:
            print("Error: Invalid input")
        except EOFError:
            break

if __name__ == "__main__":
    main()