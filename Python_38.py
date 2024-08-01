import sys
from itertools import cycle

def decode_cyclic(input_str):
    decoded = ''
    for char, digit in zip(input_str, cycle("12345")):
        decoded += chr(ord(char) - int(digit))
    return decoded

input_str = sys.stdin.readline().strip()
result = decode_cyclic(input_str)
print(result)