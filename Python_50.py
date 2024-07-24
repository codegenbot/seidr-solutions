```
def check(response, decode_shift):
    if response.lower() == "n":
        print(f"Shift is {decode_shift}")
    else:
        # Your decoding logic here
        pass

def main():
    shift = int(input("Enter the shift: "))
    while True:
        response = input("Decode again? (y/n): ")
        check(response, shift)
        if response.lower() == "n":
            break