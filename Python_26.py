from typing import List


def find_longest_word(sentence: str) -> str:
    words = sentence.split()
    longest_word = ""
    max_length = 0
    for word in words:
        if len(word) > max_length:
            max_length = len(word)
            longest_word = word
    return longest_word


if __name__ == "__main__":
    while True:
        user_input = input("Enter a sentence : ")
        try:
            print(find_longest_word(user_input))
            break
        except ValueError:
            print(
                "Invalid input. Please enter a valid sentence."
            )