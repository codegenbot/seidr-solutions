def get_integer_input(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            print("Please enter a valid integer.")

operations = [get_integer_input(f"Enter operation {i+1}: ") for i in range(3)]