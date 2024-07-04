def filter_strings_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Example usage:
# strings = ["apple", "banana", "apricot", "cherry"]
# prefix = "ap"
# print(filter_strings_by_prefix(strings, prefix))
# Output: ["apple", "apricot"]