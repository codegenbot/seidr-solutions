def add(a, b):
    return a + b

def main():
    print("Enter two integers separated by a space. Enter 'stop' to exit.")
    while True:
        try:
            user_input = input().strip()
            if user_input == 'stop':
                break
            num1, num2 = map(int, user_input.split())
            result = add(num1, num2)
            print(result)
        except (ValueError, IndexError):
            print("Error: Invalid input")