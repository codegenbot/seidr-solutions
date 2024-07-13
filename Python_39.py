import sys

def process_input(input_str):
    try:
        n = int(input_str)
        return n
    except ValueError:
        return "Invalid input. Please enter a valid integer."

if len(sys.argv) != 2:
    print("Usage: python program.py [integer]")
    sys.exit(1)

result = process_input(sys.argv[1])
print(result)