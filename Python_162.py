import hashlib
import sys

def string_to_md5():
    if len(sys.argv) > 1:
        text = sys.argv[1]
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None