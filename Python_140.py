
def fix_spaces(text, space_char):
    return text.replace(" ", space_char)

print(fix_spaces("   Exa 1 2 2 mple", "-")) # Output: -Exa-1-2-2-mple
print(fix_spaces("   Exa 1 2 2 mple", "_")) # Output: _Exa_1_2_2_mple