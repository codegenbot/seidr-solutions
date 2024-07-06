
def decode_shift(n):
    s = "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in str(n)])
    return s

if __name__ == "__main__":
    try:
        n = int(input("Enter a number: "))
        print(decode_shift(n))
    except ValueError:
        print("Invalid input. Please enter a valid number.")