def process_input(input_str):
    while True:
        try:
            n = int(input_str)
            return n
        except ValueError:
            return "Invalid input. Please enter a valid integer."
        except EOFError:
            return "No input provided."
        
user_input = input("Enter an integer: ").strip()
result = process_input(user_input)
print(result)