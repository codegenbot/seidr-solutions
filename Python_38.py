def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        return "Please enter a string with a length multiple of 3."
    
    groups = [(s[i-1] + s[i-3:i-1]) if i % 3 else s[i-3:i] for i in range(3, len(s) + 1, 3)]
    return "".join(groups)

# Taking input from the user
input_str = input("Enter a string: ")
result = decode_cyclic(input_str)
print(result)