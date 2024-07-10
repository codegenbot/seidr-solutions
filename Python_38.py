```Python
import sys

def encode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            result += temp[1] + temp[0]
            temp = ""
    if temp:
        result += temp[1] + temp[0]
    return result

if __name__ == "__main__":
    if len(sys.argv) > 1:
        user_input = sys.argv[1]
        encoded = encode_cyclic(user_input)
        print(f"Encoded: {encoded}")
        decoded = decode_cyclic(encoded)
        print(f"Decoded: {decoded}")