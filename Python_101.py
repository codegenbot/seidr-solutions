```
import re


def words_string():
    while True:
        try:
            s = input("Please enter a string with comma-separated values: ")
            result = re.split("?, |\s*,\s*|\s+|,\s*", s.strip())
            return [x for x in result if x]
            break
        except Exception as e:
            print(f"Invalid input. Please enter valid text.")