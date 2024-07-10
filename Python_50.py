user_input = input("Enter the encoded string: ").strip().lower()
if not user_input.isalpha():
    print("Invalid input. Please enter an alphabetic string.")
else:
    result = "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch for ch in user_input])
    print(result)