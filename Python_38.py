```Python
def decode_cyclic():
    s = input("Enter a cyclic string: ")
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    p = int(input("Enter the period of the cyclic string: "))
    
    # Create a cyclic string by concatenating given string with itself
    cyclic_s = (s * ((p - 1) // len(s) + 1)).[:p]
    
    return cyclic_s

print(decode_cyclic())