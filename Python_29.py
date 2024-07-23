from typing import List


def filter_by_prefix():
    while True:
        try:
            input_str = input("Expected input format: <word> (<frequency>). Enter a list of strings (space-separated) and their frequencies: ")
            words_freq = input_str.split(", ")

            if not words_freq:
                raise ValueError("Please enter valid inputs!")

            filtered_words = []

            for word_freq in words_freq:
                word, freq = word_freq.strip().split(" (")
                if len(prefix := prefix.strip()) <= len(word) and word.startswith(prefix):
                    filtered_words.append((word, int(freq[:-1])))

            return filtered_words
        except ValueError as e:
            print(f"Error: {e}")