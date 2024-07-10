user_input = input("Enter the encoded string: ").strip().lower()
if not user_input.isalnum():
    print("Invalid input. Please enter an alphanumeric string.")
else:
    result = "".join([ch if not ch.isalpha() else chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in user_input])
    print(result)