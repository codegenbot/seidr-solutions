def add(x, y):
    return x + y

def main():
    print("Enter two integers separated by a space. Enter 'stop' to exit.")
    while True:
        try:
            inputs = input().strip() or 'stop'
            if inputs == 'stop':
                break
            try:
                x, y = map(int, inputs.split())
            except ValueError:
                print("Error: Invalid input")
                continue
            result = add(x, y)
            print(result)
        except:
            print("Error: Invalid input")

if __name__ == "__main__":
    main()