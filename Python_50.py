import sys

def decode_shift(s: str):
    return "".join([chr(((ord(ch) - ord("a")) % 26) + ord("a")) for ch in s])

try:
    while True:
        input_str = input()
        if not input_str:
            break
        result = decode_shift(input_str)
        print(result)
except Exception as e:
    print("Invalid input. Please enter a valid string.")