import sys

try:
    paren_string = sys.stdin.readline().rstrip()
except EOFError:
    paren_string = ""