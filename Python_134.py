```
user_input = input("Enter a string: ")
if len(user_input) != len(user_input[::-1]):
    print(f"'{user_input}' is not a palindrome.")
else:
    print(f"'{user_input}' is a palindrome.")