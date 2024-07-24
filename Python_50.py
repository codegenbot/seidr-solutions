```
def main():
    while True:
        response = input("Decode again? (y/n): ")
        if response.lower() == "n":
            break
        decode_shift = int(input("Enter the shift: "))
        check(decode_shift)