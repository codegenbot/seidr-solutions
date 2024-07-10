def filter_strings(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

input_strings = ["apple", "banana", "cherry"]
input_prefix = "a"
result = filter_strings(input_strings, input_prefix)
print(result)