```
def decode_cyclic():
    decoded_str = ""
    while True:
        s = input("Enter a cyclically encoded string: ")
        if len(s) % 3 == 0 and all(char.isalnum() for char in s):
            for i in range(0, len(s), 3):
                decoded_str += chr((ord(s[i]) - ord("A")) * 26 + (ord(s[i + 1]) - ord("A")) % 26 + ord(s[i + 2]))
            return decoded_str
        else:
            print("Invalid input. Please try again.")

result = decode_cyclic()
if result is not None:
    print(result)