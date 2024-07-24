s = input("Enter a string: ").strip().lower()
if s.isalpha() and s.islower():
    print(decode_shift(s))
else:
    print("Input should only contain lowercase alphabets.")