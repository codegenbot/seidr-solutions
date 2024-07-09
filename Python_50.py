def decode_shift(s: str):
    return "".join([chr(((ord(ch) - ord("a")) % 26) + ord("a") if ch.islower() else ch for ch in s])

try:
    while True:
        try:
            input_str = input("Enter a string: ").strip()
            result = decode_shift(input_str)
            print(result)
        except EOFError:
            break
except Exception as e:
    print("Invalid input. Please enter a valid string.")