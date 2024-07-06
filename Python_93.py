```
def encode(string, mapping):
    return ''.join(mapping.get(i.lower(), i) for i in string)

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
    print(result)

check()