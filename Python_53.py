def main():
    print("Enter two integers separated by a space. Enter 'stop' to exit.")
    while True:
        try:
            inp = input()
            if inp == 'stop':
                break
            x, y = map(int, inp.split())
            result = add(x, y)
            print(result)
        except ValueError:
            print("Error: Invalid input")

if __name__ == "__main__":
    main()