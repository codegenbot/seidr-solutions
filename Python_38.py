# Read input from user
for line in sys.stdin:
    try:
        decoded_string = decode_cyclic(line)
        print(decoded_string)
    except ValueError as e:
        print("Invalid input")