import sys
import hashlib

def string_to_md5():
    text = sys.stdin.readline().strip()
    return hashlib.md5(text.encode()).hexdigest()