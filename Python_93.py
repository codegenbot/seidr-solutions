def encode(message):
    def swap_case_and_replace_vowel(char):
        if char.isalpha():
            char = char.swapcase()
            if char in "aeiouAEIOU":
                return chr(ord(char) + 2)
        return char

    return "".join(swap_case_and_replace_vowel(c) for c in message)