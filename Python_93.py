```
def encode(s, encoding_mapping):
    result = ""
    for char in s:
        if char in encoding_mapping:
            result += encoding_mapping[char]
        else:
            result += char
    return result

def check():
    encoding_mapping = {
        "i": "k",
        "I": "K",
        "d": "d",
        "o": "QnT",
        "O": "q",
        "n": "n",
        "N": "N",
        "t": "t",
        "T": "T",
        "k": "k",
        "K": "K",
        "w": "w",
        "W": "W",
        "h": "c",
        "H": "C",
        "a": "t",
        "A": "T",
        "s": "r",
        "S": "R",
    }
    result = encode("I DoNt KnOw WhAt tO WrItE", encoding_mapping)