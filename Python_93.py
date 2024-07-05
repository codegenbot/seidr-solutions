def encode(message):
    vowels = "aeiouAEIOU"
    vowel_map = {
        v: "q" if v == "o" else "Q" if v == "O" else chr(ord(v) + 2) for v in vowels
    }
    return "".join(vowel_map.get(c, c.swapcase()) for c in message)