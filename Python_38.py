import sys

string = sys.stdin.readline().strip()
decoded_string = decode_cyclic(string)
print(decoded_string)