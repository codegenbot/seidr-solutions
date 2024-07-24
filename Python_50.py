def decode_shift():
    while True:
        try:
            s = input().strip().lower()
            return "".join([chr((ord(ch) - 5) % 26 + ord('a')) if 'a' <= ch <= 'z' else ch for ch in s]).lower()
        except ValueError:
            print("Invalid input. Please enter only alphabets.")