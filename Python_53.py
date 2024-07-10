def add(pair):
    return sum(pair)

def main():
    print("Enter two integers in separate lines. Enter 'stop' to exit.")
    while True:
        try:
            inputs = input().strip()
            if inputs == 'stop':
                break
            x = int(inputs)
            y = int(input().strip())
            result = add((x, y))
            print(result)
        except ValueError:
            print("Error: Invalid input")

if __name__ == "__main__":
    main()