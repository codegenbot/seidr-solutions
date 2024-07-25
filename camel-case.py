def camel_case(input_str):
    return (
        " ".join(word.capitalize() for word in input_str.split(" "))
        if "-" not in input_str
        else " ".join(
            (word.capitalize() if i == 0 else f"{previous_word[0].upper()}{word[1:]}")
            for i, (previous_word, word) in enumerate(input_str.split("-"))
        )
    )