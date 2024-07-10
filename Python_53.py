def add(x, y):
    return x + y

def main():
    print("Enter two integers separated by a space. Enter 'stop' to exit.")
    while True:
        try:
            inputs = input().strip().split() or ['stop']
            if inputs == ['stop']:
                break
            if len(inputs) != 2:
                raise ValueError
            x, y = map(int, inputs)
            result = add(x, y)
            print(result)
        except:
            print("Error: Invalid input")

if __name__ == "__main__":
    main()