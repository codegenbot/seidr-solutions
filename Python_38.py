# Read input from user
if __name__ == "__main__":
    string = input("Enter a string: ")
    try:
        decoded_string = decode_cyclic(string)
    except ValueError as e:
        print("Invalid input")
else:
    print("Please enter a valid string.")