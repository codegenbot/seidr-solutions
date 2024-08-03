def concatenate_strings(strings):
    return "\n".join(strings)

strings = input().split(" ")  # Split the input by whitespace
print(concatenate_strings(strings))