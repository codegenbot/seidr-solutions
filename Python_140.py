def fix_spaces(text):
    return ''.join(['_' if c == ' ' else c for c in text])

# Test the function with example input
print(fix_spaces("   Exa 1 2 2 mple"))  # Output: "___Exa_1_2_2_mple"