def camel_case(input_string):
    result = ""
    for word in input_string.split():
        if "-" in word:
            first_letter = word[0]
            remaining_word = word[1:]
            result += (
                first_letter.upper()
                + remaining_word[0].lower()
                + remaining_word[1:]
                + " "
            )
        else:
            if len(result) > 0:
                result += " "
            result += word.capitalize()
    return result.strip()