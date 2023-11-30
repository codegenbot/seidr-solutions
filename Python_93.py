def encode(message: str) -> str:
    vowels = "aeiouAEIOU"
    translation_table = str.maketrans(
        vowels + ''.join([chr(ord(vowel) + 2) for vowel in vowels]),
        vowels.upper() + ''.join([chr(ord(vowel.upper()) + 2) for vowel in vowels.upper()])
    )
    return message.translate(translation_table)