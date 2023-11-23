def fix_spaces(text):
    return "_".join(text.split())

result = fix_spaces("   Exa 1 2 2 mple")
print(result)