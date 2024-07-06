# Read input from user and decode it using the decode_cyclic function
if __name__ == "__main__":
    string = input("Enter a string: ")
    try:
        decoded_string = decode_cyclic(string)
    except ValueError as e:
        print("Invalid input")
else:
    print("Please enter a valid string.")