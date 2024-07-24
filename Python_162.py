```
import hashlib
def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    while True:
        try:
            md5_hash = input("Enter an MD5 hash (e.g., 1234567890abcdef): ")
            result = string_to_md5(md5_hash)
            print(result)
        except KeyboardInterrupt:
            print("\nGoodbye!")
            break