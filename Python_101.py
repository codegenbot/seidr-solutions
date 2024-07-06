def words_string(inp):
    words = inp.split()
    if len(words) == 1:
        return "The string contains one word."
    else:
        return f"The string contains {len(words)} words."