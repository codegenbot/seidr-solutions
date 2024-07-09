def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


try:
    while True:
        input_str = input("Enter a string: ").strip()
        if not input_str:
            break
        result = decode_shift(input_str)
        print(result)
except EOFError:
    pass
except Exception as e:
    print("Invalid input. Please enter a valid string.")