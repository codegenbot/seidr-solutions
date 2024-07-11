```
from typing import List


def concatenate():
    try:
        strings = input("Enter a list of strings (comma-separated): ")
        return "".join([s.strip() for s in strings.split(",")])
    except Exception as e:
        return f"Error: {str(e)}"