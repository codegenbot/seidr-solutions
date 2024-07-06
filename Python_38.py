# Read input from user
if __name__ == "__main__":
    string = input("Enter a string: ", "") or "Invalid input"
    try:
        decoded_string = decode_cyclic(string)
        print(decoded_string)
    except ValueError as e:
        print("Invalid input")