```
def check(func, *args):
    return func(*args)

def decode(encoded_str, shift):
    result = ""
    try:
        if not 0 <= shift <= 25:
            raise ValueError("Invalid shift value. Please enter a value between 0 and 25.")
        for ch in encoded_str:
            try:
                if ch.isalpha():
                    if "A" <= ch <= "Z":
                        result += chr((ord(ch) - ord("A") - shift) % 26 + ord("A"))
                    elif "a" <= ch <= "z":
                        result += chr((ord(ch) - ord("a") - shift) % 26 + ord("a"))
                else:
                    result += ch
            except AttributeError:
                print("Invalid character. Please enter only alphanumeric characters or spaces.")
    except ValueError as e:
        print(e)
    return result

def main():
    encoded_str = input("Enter the encoded string: ")
    shift = int(input("Enter the shift value (0-25): "))
    decoded_str = decode(encoded_str, shift)
    print(f"Decoded string: {decoded_str}")

if __name__ == "__main__":
    main()
check(decode, "Hello World", 3)