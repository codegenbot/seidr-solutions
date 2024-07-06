import hashlib
import sys

def string_to_md5():
    if len(sys.argv) != 2:
        print("Please provide a single input argument")
        return None
    text = sys.argv[1].encode()
    if text:
        return hashlib.md5(text).hexdigest()
    else:
        return None