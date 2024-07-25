import hashlib
import sys

def string_to_md5():
    text = sys.stdin.readline().strip()
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None