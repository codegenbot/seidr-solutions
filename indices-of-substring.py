Here is the solution:

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text.startswith(target, i)]

# testing your function
print(indices_of_substring("a", "a"))
print(indices_of_substring("!", "!"))
print(indices_of_substring("r", "nm,xcnwqnd@#$fwkdjn3"))
print(indices_of_substring("hi", "hihihihihihihihihihi"))
print(indices_of_substring("############", "#"))