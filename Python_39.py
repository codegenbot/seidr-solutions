def process_input():
    while True:
        try:
            n = int(input("Enter an integer: ").strip())
            return n
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

result = process_input()
print(result)