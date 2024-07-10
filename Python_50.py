def process_string(user_input: str) -> str:
    return ''.join([char for char in user_input if char.isalnum()])

print("Please enter an alphanumeric string:")
user_input = input().strip()
result = process_string(user_input)
print(result)