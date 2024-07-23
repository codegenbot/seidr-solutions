from typing import List


def filter_by_prefix():
    while True:
        try:
            words = input("Enter a list of strings (space-separated): ")
            prefix = input("Enter a prefix: ")

            if not words or not prefix:
                raise ValueError("Expected input format: word (<frequency>)")

            filtered_words = [word for word in words.split() if word.startswith(prefix)]

            return filtered_words, prefix
        except ValueError as e:
            print(f"Error: {e}")