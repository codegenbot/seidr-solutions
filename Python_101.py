def words_string(input_string):
    import re

    inp = input_string.strip()
    words = re.split(r"\s+", inp)
    if len(words) == 1:
        return "The string contains one word."
    else:
        return f"The string contains {len(words)} words."