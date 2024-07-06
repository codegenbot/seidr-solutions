import re

def words_string():
    while True:
        try:
            s = input("Please enter a string with comma-separated values: ")
            return re.split('?, |\s*,\s*|\s+|,\s*', s.strip())
        except Exception as e:
            print(f"Invalid input. Please enter valid text.")

print(words_string())