```
user_input = input("Enter a list of strings: ")
lst = [s.strip() for s in user_input.split(',')]
print(match_parens([lst]))