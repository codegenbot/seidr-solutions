try:
    substring = input().strip()
except EOFError:
    raise ValueError("Invalid input format for substring")

if not all(char.isalpha() or char.isspace() for char in substring):
    raise ValueError("Invalid input format for substring")