import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

try:
    for line in iter(input, ''):
        result = string_to_md5(line)
        print(result)
except KeyboardInterrupt:
    print("Program interrupted by user.")