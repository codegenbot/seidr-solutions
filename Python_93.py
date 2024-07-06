import re


def encode(message):
    return re.sub(
        r"[aeiouAEIOU]",
        lambda m: chr(
            (ord(m.group()) - ord("a" if m.group().islower() else "A") + 2) % 26
            + ord("a" if m.group().islower() else "A")
        ),
        message,
    ).swapcase()