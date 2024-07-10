def add(a, b):
    return a + b

def main():
    print("Enter two integers separated by a space. Enter 'stop' to exit.")
    while True:
        try:
            user_input = input().strip().split(' ')
            if user_input[0] == 'stop':
                break
            if len(user_input) != 2:
                raise ValueError
            num1, num2 = map(int, user_input)
            result = add(num1, num2)
            print(result)
        except (ValueError, IndexError):
            print("Error: Invalid input")

if __name__ == "__main__":
    main()