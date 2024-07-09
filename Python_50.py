def decode_shift(s: str):
    return "".join([chr(((ord(ch) - ord("a")) % 26) + ord("a")) for ch in s])

try:
    while True:
        input_str = input("Enter a string: ").strip()
        if input_str == "":
            print("Please press 'Enter' before breaking the loop")
        if not input_str:
            break
        else:
            result = decode_shift(input_str)
            print(result)
except EOFError:
    pass
except Exception as e:
    print("Invalid input. Please enter a valid string.")