def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

while True:
    try:
        input_str = input().strip()
        if input_str == '':
            break
        result = decode_shift(input_str)
        print(result)
    except EOFError:
        break
    except Exception as e:
        print("Invalid input. Please enter a valid string.")